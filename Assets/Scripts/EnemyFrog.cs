using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFrog : MonoBehaviour
{
    private Rigidbody2D rb;
    public Transform leftPoint, rightPoint;
    public float speed;
    private float leftPointX, rightPointX;
    private bool faceLeft = true;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        leftPointX = leftPoint.position.x;
        rightPointX = rightPoint.position.x;
        Destroy(leftPoint.gameObject);
        Destroy(rightPoint.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        Movement();
    }

    void Movement()
    {
        if (faceLeft)
        {
            rb.velocity = new Vector2(-speed * Time.deltaTime, rb.velocity.y);
            if (transform.position.x < leftPointX)
            {
                transform.localScale = new Vector3(-1, 1, 1);
                faceLeft = false;
            }
        } else
        {
            rb.velocity = new Vector2(speed * Time.deltaTime, rb.velocity.y);
            if (transform.position.x > rightPointX)
            {
                transform.localScale = new Vector3(1, 1, 1);
                faceLeft = true;
            }
        }
    }
}
