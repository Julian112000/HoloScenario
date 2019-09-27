﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{
    private Vector3 pos;

    public void SetPosition(Data data, Vector3 gps)
    {
        pos = SceneManager.Instance.GeoToWorldPositionXZ(new Vector2d(data.GetLatitude(), data.GetLongitude()));

        Vector3 dif = gps - pos;
        Debug.Log(dif);
        transform.position = new Vector3(dif.x, data.GetAltitude(), dif.z);
    }
}
