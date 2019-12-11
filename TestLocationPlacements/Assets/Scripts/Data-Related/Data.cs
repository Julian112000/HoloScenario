using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Data : MonoBehaviour
{
    private int sceneid;
    private int orderid;
    private double latitude;
    private double longitude;
    private float altitude;
    private int rotation;

    private int id;

    public Data(int sceneid, int orderid, int id, double lat, double lon, float alt, int rotation)
    {
        this.sceneid = sceneid;
        this.orderid = orderid;
        this.id = id;
        this.latitude = lat;
        this.longitude = lon;
        this.altitude = alt;
        this.rotation = rotation;
    }
    public int GetOrderId()
    {
        return orderid;
    }
    public int GetID()
    {
        return id;
    }
    public double GetLatitude()
    {
        return latitude;
    }
    public double GetLongitude()
    {
        return longitude;
    }
    public float GetAltitude()
    {
        return altitude;
    }
    public float GetRotation()
    {
        return rotation;
    }
    public int GetSceneId()
    {
        return sceneid;
    }
}
