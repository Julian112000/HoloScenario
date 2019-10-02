using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA.Input;

public class HandGestures : MonoBehaviour
{
    [SerializeField]
    private Animator animator;

    void Start()
    {
        //animator.Play("ClickedAnimation");
        // get a new gesture recognizer
        GestureRecognizer recognizer = new GestureRecognizer();
        recognizer.SetRecognizableGestures(GestureSettings.Tap);
        recognizer.HoldStarted += Handel;
        //recognizer.HoldCompleted += GeenHandel;
        recognizer.TappedEvent += (source, tapCount, ray) =>
        {
            if (tapCount == 1)
            {
                animator.Play("ClickedAnimation");
            }
        };
        recognizer.StartCapturingGestures();
    }
    public void Handel(HoldStartedEventArgs args)
    {

    }
    public void GeenHandel(HoldStartedEventArgs args)
    {

    }
}
