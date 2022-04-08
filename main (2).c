#include <kipr/wombat.h>

//up 2000;
//down = 450;
//bigger number down, smaller up for arm
// right is zero
//left is one
//int forward = 100;
//int backward = 100;

int main()
{
   
    
    
    enable_servos();
    set_servo_position(1,1446);
    msleep(500);
    disable_servos();
    //makes sure arm is in up position
    
    shut_down_in(120);

    mav(0, 500);
    mav(1, 500);
    msleep(9000);
    //forward for 6 sec

    cmpc(1);

    while (gmpc(1)<1175)
    {
        mav(0,-500);
        mav(1,500);
        //this turns right 90 degrees 
    }
 

    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
    
    mav(0,500);
    mav(1,490);
    msleep(10000);
    //go forward for 4 secs

    enable_servos(1);

    set_servo_position (1, 450);
    //putting servo arm down (starts in up pos)

   
    cmpc(1);
    while (gmpc(1)<1175) 
    {
        mav(0,-500);
        mav(1,500);
        //this turns right
    }

    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
    
    mav(0,-500);
    mav(1,-500);
    msleep(700);
    //back up 1 sec
    
    mav(1,0);
    mav(0,0);
    msleep(1000);
    //stop

    set_servo_position (1, 1446);
    //servo arm up

    msleep(4000); 
    //hold arm in up position for 4 seconds

    set_servo_position (1,450);
    //put arm down

    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
    set_servo_position(1,700);
    msleep(100);
    
    disable_servos(); 
    
    mav(0,100);
    mav(1,100);
    msleep(2000);
    //go forward a lil to not hit pcr after lift
    
    cmpc(0);
    cmpc(1);
    
    while (gmpc(1)< 1180) 
    {
        mav(0,500);
        mav(1,-500);
        //this turns left
    }
    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
    
    mav(0,500);
    mav(1, 500);
    msleep(3000);
    //foward for 6 secs, determine distance length for path from PCR to transporter
    
    cmpc(0);
    cmpc(1);
    
     while (gmpc(1)< 1175) 
    {
        mav(0,-500);
        mav(1,500);
        //this turns right
    }

    mav(1,0);
    mav(0,0);
    msleep(1000);
    //stoppp


    ao();

    return 0;
}
