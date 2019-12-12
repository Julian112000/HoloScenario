using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fennek : Unit
{
    [SerializeField]
    private Transform[] wheels;
    [SerializeField]
    private Transform gun;

    public override void Move()
    {
        //Move Wheels
        for (int i = 0; i < wheels.Length; i++)
        {
            wheels[i].transform.Rotate(new Vector3(0, 0, (speed * 40) * Time.deltaTime));
        }
        //Move Gun
        gun.rotation = Quaternion.Euler(0.0f, Mathf.PingPong(Time.time * 40, 180) + transform.rotation.eulerAngles.y, 0.0f);
        base.Move();
    }
    public override void Rotate(Vector3 pos)
    {
        wheels[2].parent.transform.right = -(pos - transform.position);
        wheels[3].parent.transform.right = -(pos - transform.position);
        base.Rotate(pos);
    }
}
