using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CV90 : Unit
{
    //base of the turret transform of the cv90
    [SerializeField]
    private Transform turretbase;

    //function called when moving
    public override void Move()
    {
        //rotate turretbase
        turretbase.rotation = Quaternion.Euler(0.0f, Mathf.PingPong(Time.time * 40, 180) + transform.rotation.eulerAngles.y, 0.0f);
        base.Move();
    }
}
