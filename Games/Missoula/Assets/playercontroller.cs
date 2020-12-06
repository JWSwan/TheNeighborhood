using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using UnityEngine;

public class playercontroller : MonoBehaviour
{
    public float speed;

    private Rigidbody rb;

    void Start ()
    {
        rb = GetComponent<Rigidbody>();

    }
    void FixedUpdate()
    {
        float moveHorizontal = Input.GetAxis("Horizontal");
        float moveVertical  = Input.GetAxis("Vertical");
        float moveUp = Input.GetAxis("Jump");
        Vector3 movement = new Vector3 (moveHorizontal, 2*moveUp, moveVertical);

        rb.AddForce(movement * speed);
        
    }

   
}
