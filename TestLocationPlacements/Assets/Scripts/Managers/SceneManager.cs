using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SceneManager : MonoBehaviour
{
    //Instance of the SceneManager.cs script
    public static SceneManager Instance;

    //Main models list with all prefabs of spawning objects
    [SerializeField]
    public List<GameObject> models = new List<GameObject>();

    //Earth radius and shift related to the earth globe scale
    private const int EarthRadius = 6378137;
    private const double OriginShift = 2 * Math.PI * EarthRadius / 2;
    //Scale for spawning objects [default = 
    [SerializeField]
    private float scale;
    //gps from database transformed to a vector3
    private Vector3 maingps;

    //UI Panels to turn on and off when loaded ui
    [SerializeField]
    private GameObject[] panels;
    //Main scenario prefab ui element
    [SerializeField]
    private GameObject scenarioPanel;
    //Transform where all 'scenariopanels' are spawned
    [SerializeField]
    private Transform scenarioTransform;

    //current id/name/date of the scene from database
    private int currentid;
    private string currentname;
    private string currentdate;
    //Scene Ids for ui panels
    private List<int> sceneids = new List<int>();

    private void Awake()
    {
        //Set instance to scenemanager
        Instance = this;
        //Add related event and assign to void
        DataGetter.ondataloaded += CreateUnit;
        DataGetter.onhololoaded += CreateScenarios;
    }
    void CreateUnit()
    {
        //Create new data list and set new data
        List<Data> data = new List<Data>();
        data = DataGetter.Instance.GetDatas();

        //For all data in list instantiate units and set positions for each of them 
        for (int i = 0; i < data.Count; i++)
        {
            Unit unit = Instantiate(models[data[i].GetID()], Vector3.zero, Quaternion.identity).GetComponent<Unit>();
            unit.SetPosition(data[i], maingps);
            unit.transform.SetParent(this.transform);
        }
    }
    void CreateScenarios()
    {
        //Enable-Disable Ui panels
        panels[0].SetActive(false);
        panels[1].SetActive(false);
        panels[2].SetActive(true);
        //Load all scenario ui panels from database
        DataGetter.Instance.LoadScenarios(gameObject, 100);
    }
    public void CreateNewPanel(int id, string name, string date)
    {
        //Add panel if it doesnt contain in the list
        if (!sceneids.Contains(id))
        {
            //Instantiate the panel and initialize with data
            ScenarioPanel panel = Instantiate(scenarioPanel, scenarioTransform.transform).GetComponent<ScenarioPanel>();
            panel.Initialize(id, name, date);
            sceneids.Add(id);
        }
    }
    public void Load(int number, string name, string time, int amount)
    {
        for (int i = 0; i < amount; i++)
        {
            //Call to datagetter to get units from database
            DataGetter.Instance.GetUnitData(number, i);
        }
        //Set id/name/data to new data
        currentid = number;
        currentname = name;
        currentdate = time;
    }
    public void SetGps(Vector2d gps)
    {
        maingps = GeoToWorldPositionXZ(gps);
        DataGetter.onhololoaded();
    }
    //Transform vector2d to worldposition
    public static Vector2d GeoToWorldPosition(double lat, double lon, Vector2d refPoint, float scale)
    {
        var posx = lon * OriginShift / 180;
        var posy = Math.Log(Math.Tan((90 + lat) * Math.PI / 360)) / (Math.PI / 180);
        posy = posy * OriginShift / 180;
        return new Vector2d((posx - refPoint.x) * scale, (posy - refPoint.y) * scale);
    }
    //Transform vector2d to vector3 in world position
    public Vector3 GeoToWorldPositionXZ(Vector2d latitudeLongitude)
    {
        var worldPos = GeoToWorldPosition(latitudeLongitude.x, latitudeLongitude.y, new Vector2d(36340.9, 5825.7), scale);
        Vector3 pos = new Vector3((float)worldPos.x, 0, (float)worldPos.y);
        return transform.TransformPoint(pos);
    }
}
