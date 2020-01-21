using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Soldier : Unit
{
    //animator controller of the soldier
    [SerializeField]
    private Animator controller;

    public override void Move()
    {
        //when moving set Walking to true and set the speed
        controller.SetBool("Walking", true);
        controller.SetFloat("Speed", speed);
        base.Move();
    }
}
