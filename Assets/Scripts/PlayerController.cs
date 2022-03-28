using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Rigidbody2D rb;
    public Animator anim;
    public Collider2D coll;
    public float speed;
    public float jumpforce;
    public LayerMask ground;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        Movement();
        SwitchAnim();
    }

    // Movement
    void Movement()
    {
        float horizontalMove = Input.GetAxis("Horizontal"); // 存在小数。-1: Left; 0: Stop; 1: Right.
        float facedirection = Input.GetAxisRaw("Horizontal"); // 无小数，只有0、1、-1.
        // 角色行走
        if (horizontalMove != 0)
        {
            rb.velocity = new Vector2(horizontalMove * speed * Time.deltaTime, rb.velocity.y);
            anim.SetFloat("running", Mathf.Abs(facedirection));
        }
        if (facedirection != 0)
        {
            transform.localScale = new Vector3(facedirection, 1, 1); // x改变，y、z不改变。
        }
        // 角色跳跃
        if (Input.GetButtonDown("Jump"))
        {
            rb.velocity = new Vector2(rb.velocity.x, jumpforce * Time.deltaTime);
            anim.SetBool("jumping", true);
            anim.SetBool("falling", false);
        }
    }

    // 角色降落改变动画
    void SwitchAnim()
    {
        //anim.SetBool("idle", false);
        if (anim.GetBool("jumping"))
        {
            if (rb.velocity.y < 0)
            {
                // y轴没力了，触发降落
                anim.SetBool("jumping", false);
                anim.SetBool("falling", true);
            } 
        } else if (coll.IsTouchingLayers(ground))
        {
            //print("IsTouchingLayers");
            anim.SetBool("falling", false);
            anim.SetBool("idle", true);
        }
    }

}
