using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public Rigidbody2D rb;
    public Animator anim;
    public Collider2D coll_foot, coll_body;
    public float speed;
    public float jumpforce;
    public LayerMask ground, cherryLayer, frogLayer;
    public int cherry = 0;
    public int jumpNumber = 0;
    public Text cherryNum;
    private bool isHurt = false, isTap = false;

    // Start is called before the first frame update
    void Start()
    {
        //coll_head.sharedMaterial = new PhysicsMaterial2D() { friction = 0.0f, bounciness = 0.0f };
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if (!isHurt)
        {
            Movement();
        }
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
        if (Input.GetButtonDown("Jump") && jumpNumber < 2)
        {
            rb.velocity = new Vector2(rb.velocity.x, jumpforce * Time.deltaTime);
            anim.SetBool("jumping", true);
            anim.SetBool("falling", false);
            jumpNumber += 1;
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
        }
        else if (coll_foot.IsTouchingLayers(ground))
        {
            //print("IsTouchingLayers");
            anim.SetBool("falling", false);
            anim.SetBool("idle", true);
            jumpNumber = 0;
        }
        if (isHurt)
        {
            anim.SetBool("hurt", true);
            anim.SetFloat("running", Mathf.Abs(0));
            if (Mathf.Abs(rb.velocity.x) < 0.1)
            {
                isHurt = false;
                anim.SetBool("hurt", false);
                anim.SetBool("idle", true);
            }
        } else if (isTap)
        {
            rb.velocity = new Vector2(rb.velocity.x, jumpforce * Time.deltaTime);
            anim.SetBool("jumping", true);
            anim.SetBool("falling", false);
            jumpNumber = 1;
            isTap = false;
        }
    }

    // 收集Cherry
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.tag == "CollectionCherry" && coll_body.IsTouchingLayers(cherryLayer))
        {
            
            Destroy(collision.gameObject);
            cherry += 1;
            cherryNum.text = cherry.ToString();
        }
    }

    // 与敌人战斗,碰撞发生时触发
    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "EnemyFrog")
        {
            //print("OnCollisionEnter2D");
            if (anim.GetBool("falling"))
            {
                // 踩敌人
                Destroy(collision.gameObject);
                isTap = true;
            } else if (transform.position.x < collision.gameObject.transform.position.x && collision.gameObject)
            {
                // 从左撞击敌人，被弹回去10距离，y不变
                rb.velocity = new Vector2(-5, rb.velocity.y);
                isHurt = true;
            } else if (transform.position.x > collision.gameObject.transform.position.x && collision.gameObject)
            {
                // 从右撞击敌人，被弹回去10距离
                rb.velocity = new Vector2(5, rb.velocity.y);
                isHurt = true;
            }
        }
    }

}
