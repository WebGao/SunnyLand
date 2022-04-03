using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyFrog : MonoBehaviour
{
    private Rigidbody2D rb;
    private Animator anim;
    private Collider2D coll;
    public LayerMask ground;
    public Transform leftPoint, rightPoint;
    public float speed, jumpForce;
    private float leftPointX, rightPointX;
    private bool faceLeft = true;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        anim = GetComponent<Animator>();
        coll = GetComponent<Collider2D>();
        transform.DetachChildren(); // 若是不添加，left和right跟着frog移动
        leftPointX = leftPoint.position.x;
        rightPointX = rightPoint.position.x;
        Destroy(leftPoint.gameObject);
        Destroy(rightPoint.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        // Movement(); // Animator event调用
        SwitchAnim();
    }

    void Movement()
    {
        if (faceLeft)
        {
            if (coll.IsTouchingLayers(ground))
            {
                rb.velocity = new Vector2(-speed * Time.deltaTime, jumpForce);
                anim.SetBool("jumping", true);
            }
            if (transform.position.x < leftPointX && coll.IsTouchingLayers(ground))
            {
                transform.localScale = new Vector3(-1, 1, 1);
                faceLeft = false;
            }
        }
        else
        {
            if (coll.IsTouchingLayers(ground))
            {
                rb.velocity = new Vector2(speed * Time.deltaTime, jumpForce);
                anim.SetBool("jumping", true);
            }
            //rb.velocity = new Vector2(speed * Time.deltaTime, jumpForce * Time.deltaTime);
            if (transform.position.x > rightPointX && coll.IsTouchingLayers(ground))
            {
                transform.localScale = new Vector3(1, 1, 1);
                faceLeft = true;
            }
        }
    }

    void SwitchAnim()
    {
        if (anim.GetBool("jumping"))
        {
            if (rb.velocity.y < 0)
            {
                // 触发降落
                anim.SetBool("jumping", false);
                anim.SetBool("falling", true);
            }
        }
        else if (anim.GetBool("falling"))
        {
            if (coll.IsTouchingLayers(ground))
            {
                // 触发idle
                anim.SetBool("falling", false);
            }
        }
    }
}