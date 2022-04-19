#include <kipr/wombat.h>

int main()
{
   
    //assume this is front facing the transporter 
    
    cmpc(0);
    cmpc(1);
    
    while (gmpc(1)<1175)
    {
        mav(0,-500);
        mav(1,500);
        //this turns right 90 degrees 
    }
 	cmpc(0);
    cmpc(1);
    
    while (gmpc(1)<1175)
    {
        mav(0,-500);
        mav(1,500);
        //this turns right 90 degrees 
    }
 //in total a one eighty turn
    
    enable_servos(1);
    set_servo_position(1,1446);
    
    mav(0,-500);
    mav(1,-500);
    msleep(3000);
    //change the distance to fit the end of actual fifteen second sketch code
    
    set_servo_position(1, 450);
    
    mav(0,0);
    mav(1,0);
    msleep(500);
    
    mav(0,500);
    mav(1,500);
    msleep(9000);
    //determine the distance to drive from transporter to sample isolation
    
    return 0;
}
