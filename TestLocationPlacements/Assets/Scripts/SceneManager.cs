using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneManager : MonoBehaviour
{
    private const int EarthRadius = 6378137; //no seams with globe example
    private const double OriginShift = 2 * Math.PI * EarthRadius / 2;
    [SerializeField]
    private float scale;

    public static SceneManager Instance;

    private Vector3 maingps;

    [SerializeField]
    public List<GameObject> models = new List<GameObject>();

    private void Awake()
    {
        Instance = this;
        DataGetter.ondataloaded += CreateUnit;
    }
    void CreateUnit()
    {
        List<Data> data = new List<Data>();
        data = DataGetter.Instance.GetDatas();

        for (int i = 0; i < data.Count; i++)
        {
            Unit unit = Instantiate(models[data[i].GetID()], Vector3.zero, Quaternion.identity).GetComponent<Unit>();
            unit.SetPosition(data[i], maingps);
        }
    }
    public void SetGps(Vector2d gps)
    {
        maingps = GeoToWorldPositionXZ(gps);
    }
    //
    public static Vector2d GeoToWorldPosition(double lat, double lon, Vector2d refPoint, float scale)
    {
        var posx = lon * OriginShift / 180;
        var posy = Math.Log(Math.Tan((90 + lat) * Math.PI / 360)) / (Math.PI / 180);
        posy = posy * OriginShift / 180;
        return new Vector2d((posx - refPoint.x) * scale, (posy - refPoint.y) * scale);
    }
    public Vector3 GeoToWorldPositionXZ(Vector2d latitudeLongitude)
    {
        var worldPos = GeoToWorldPosition(latitudeLongitude.x, latitudeLongitude.y, new Vector2d(36340.9, 5825.7), scale);
        Vector3 pos = new Vector3((float)worldPos.x, 0, (float)worldPos.y);
        return transform.TransformPoint(pos);

    }
}
