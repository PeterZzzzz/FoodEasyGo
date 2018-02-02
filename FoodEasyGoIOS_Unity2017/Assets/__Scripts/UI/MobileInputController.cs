using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MobileInputController : MonoBehaviour 
{
    private const float DEADZONE = 100f;
    public static MobileInputController instance { set; get; }

    private bool tap, swipeLeft, swipeRight;
    private Vector2 startTouch, swipeDelta;

    public bool Tap { get { return tap; } }
    public Vector2 SwipeDelta { get { return swipeDelta; } }
    public bool SwipeLeft { get { return swipeLeft; } }
    public bool SwipeRight { get { return swipeRight; } }

    private void Awake()
    {
        instance = this;
    }

    private void Update()
    {
        //Debug.Log("0000000000000");
        tap = swipeLeft = swipeRight = false;
        //从右向左的顺序执行，先执行swipeRignt的赋值

        #region Standalone Input
        if(Input.GetMouseButtonDown(0))
        {
            tap = true;
            startTouch = Input.mousePosition;
        }
        else if(Input.GetMouseButtonUp(0))
        {
            startTouch = swipeDelta = Vector2.zero;
        }
        #endregion

        #region Mobile Input
        if (Input.touches.Length > 0)
        {
            if(Input.touches[0].phase == TouchPhase.Began)
            {
                tap = true;
                startTouch = Input.touches[0].position;
            }
            else if (Input.touches[0].phase == TouchPhase.Ended || Input.touches[0].phase == TouchPhase.Canceled)
            {
                startTouch = swipeDelta = Vector2.zero;
            }
        }

        #endregion

        //Calculate distance
        swipeDelta = Vector2.zero;
        if(startTouch != Vector2.zero)
        {
            //check mobile
            if(Input.touches.Length != 0)
            {
                swipeDelta = Input.touches[0].position - startTouch;
            }
            //check standalone
            else if(Input.GetMouseButton(0))
            {
                swipeDelta = (Vector2)Input.mousePosition - startTouch;
            }
        }

        //Check if beyond deadzone
        if(swipeDelta.magnitude > DEADZONE)
        {
            //in here we confirmed swipe
            float x = swipeDelta.x;
            float y = swipeDelta.y;
            if (Mathf.Abs(x) > Mathf.Abs(y))
            {
                //left or right
                if (x < 0)
                    swipeLeft = true;
                else
                    swipeRight = true;
            }

            startTouch = swipeDelta = Vector2.zero;
        }

    }


}
