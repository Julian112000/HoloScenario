using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Unit : MonoBehaviour
{
    private Vector3 pos;

    public void SetPosition(Data data, Vector3 gps)
    {
        //Return latitude and longitude to a vector3
        pos = SceneManager.Instance.GeoToWorldPositionXZ(new Vector2d(data.GetLatitude(), data.GetLongitude()));

        //Get difference between own gps and unit position
        Vector3 dif = gps - pos;

        //Set position and rotation in unity xyz
        transform.position = new Vector3(dif.x, data.GetAltitude(), dif.z);
        transform.rotation = Quaternion.Euler(0, data.GetRotation(), 0);
    }
    
}
