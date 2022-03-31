#include <kipr/wombat.h>
 
 
int up= 2000;
int down = 450;
//bigger number down, smaller up for arm

int forward = 100;
int backward = 100;

int main()
{
 wait_for_light(0);   
    shut_down_in(120);
    
    mav(0, 500);
    mav(1, 500);
    msleep(5500);
    //forward for 6.5 sec
    
   mav(0, 500);
    mav(1, -500);
    msleep(2500);
    //turn right (90 degree angle)
    
    mav(0,500);
    mav(1,500);
    msleep(14300);
    //this should go from the left most side to the middle of the PCR machine
  
    
     enable_servos(1);
       
    set_servo_position (1, 450);
    //putting servo arm down (starts in up pos)
    
    mav(0, -500);
    mav(1, 500);
    msleep(2500);
    //turn left (90 degree angle)
   
   
    set_servo_position (1, 1446);
    //servo arm up
    
    msleep(3000); 
    //hold arm in up position for 3 seconds
    
    set_servo_position(1,450);
    //put arm down
    
    disable_servos(); 
    mav(0, 500);
    mav(1, -500);
    msleep(2000);
    //turn right (90 degree angle) check path plan
    
    mav(0,100);
    mav(1, 100);
    msleep(6500);
    //foward for 6 secs, determine distance length for path from PCR to transporter
    
    mav(0, 500);
    mav(1, -500);
    msleep(2500);
    //turn right (90 degree angle)
    
   
    
    
    
    ao();
    
    return 0;
}
