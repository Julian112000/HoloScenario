using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CV90 : Unit
{
    [SerializeField]
    private Transform turretbase;

    public override void Move()
    {
        turretbase.rotation = Quaternion.Euler(0.0f, Mathf.PingPong(Time.time * 40, 180) + transform.rotation.eulerAngles.y, 0.0f);
        base.Move();
    }
}
