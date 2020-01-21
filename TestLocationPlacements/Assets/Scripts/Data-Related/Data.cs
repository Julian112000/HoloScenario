using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Data : MonoBehaviour
{
    private int sceneid;            //id of the scene the data belongs
    private int orderid;            //order id of the data
    private double latitude;        //latitude (x) 
    private double longitude;       //longitude (z)
    private float altitude;         //altitude (y)
    private int rotation;           //orientation of the data

    private int id;                 //main id of the data

    //constructor data
    public Data(int sceneid, int orderid, int id, double lat, double lon, float alt, int rotation)
    {
        //set all data and local
        this.sceneid = sceneid;
        this.orderid = orderid;
        this.id = id;
        this.latitude = lat;
        this.longitude = lon;
        this.altitude = alt;
        this.rotation = rotation;
    }
    #region Getters
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
    #endregion
}
