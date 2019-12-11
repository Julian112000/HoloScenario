using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soldier : Unit
{
    [SerializeField]
    private Animator controller;

    public override void Move()
    {
        controller.SetBool("Walking", true);
        controller.SetFloat("Speed", speed);
        base.Move();
    }
}
