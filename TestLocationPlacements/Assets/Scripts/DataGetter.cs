using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DataGetter : MonoBehaviour
{
    public static DataGetter Instance;

    public delegate void OnDataLoaded();
    public static OnDataLoaded ondataloaded;

    [SerializeField]
    private string url;
    [SerializeField]
    private int sceneid;

    [SerializeField]
    private int unitamounts = -1;

    [SerializeField]
    private List<Data> datas = new List<Data>();
    public List<Data> GetDatas()
    {
        return datas;
    }

    private Vector2d gps;
    [SerializeField]
    private Text connectionText;

    private void Awake()
    {
        Instance = this;
    }
    private void Start()
    {
        gps = new Vector2d(52.146611334992045, 5.348752095897329);
        SceneManager.Instance.SetGps(gps);
        //
        StartCoroutine(GetSceneData(sceneid));
        for (int i = 0; i < 100; i++)
        {
            GetUnitData(i);
        }
    }
    void GetUnitData(int id)
    {
        StartCoroutine(GetUnitData(sceneid, id));
    }
    IEnumerator GetSceneData(int sceneid)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "load");
        form.AddField("sceneid", sceneid);
        WWW www = new WWW(url + "scenarioapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string datatext = www.text;
            string[] values = datatext.Split(","[0]);
            unitamounts = int.Parse(values[3]);
        }
    }
    IEnumerator GetGpsLocation(int sceneid)
    {
        WWWForm form = new WWWForm();
        form.AddField("action", "gps");
        form.AddField("sceneid", sceneid);
        WWW www = new WWW(url + "loadapi.php", form);
        yield return www;
        Debug.Log(www.text);
        if (www.text != "error")
        {
            string datatext = www.text;

            string[] values = datatext.Split(","[0]);

            double lat = double.Parse(values[0]);
            double lon = double.Parse(values[1]);
            float alt = float.Parse(values[2]);
            SceneManager.Instance.SetGps(new Vector2d(lat, lon));
        }
    }
    IEnumerator GetUnitData(int sceneid, int id)
    {
        yield return new WaitForSeconds(1f);
        WWWForm form = new WWWForm();
        form.AddField("action", "unit");
        form.AddField("sceneid", sceneid);
        form.AddField("order", id);
        WWW www = new WWW(url + "loadapi.php", form);
        yield return www;
        if (www.text != "error")
        {
            string datatext = www.text;

            string[] values = datatext.Split(";"[0]);

            #if !UNITY_EDITOR
            values[1] = values[1].Replace(",", ".");
            values[2] = values[2].Replace(",", ".");
            values[3] = values[3].Replace(",", ".");
            #endif

            int db_id = int.Parse(values[0]);
            double lat = double.Parse(values[1]);
            double lon = double.Parse(values[2]);
            float alt = float.Parse(values[3]);
            int rot = int.Parse(values[4]);
            //
            Debug.Log(db_id);
            Data data = new Data(db_id, lat, lon, alt, rot);
            datas.Add(data);
            if (datas.Count == unitamounts)
            {
                ondataloaded();
            }
        }
    }
    public void ShowText(string t)
    {
        connectionText.text = t;
    }
}
