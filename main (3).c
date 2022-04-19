#include <kipr/wombat.h>

int main()
{
	    
    
    mav(0,-500);
    mav(1,-500);
    msleep(5550);
       
    mav(0,0);
    mav(1,0);
    msleep(100);
    
   enable_servos(1);
    
    set_servo_position (1, 450);
    //putting servo arm down starts in up pos
    
    
        
     set_servo_position (1, 1446);
    //servo arm up

    msleep(4000); 
    //hold arm in up position for 3 seconds

    set_servo_position(1,450);
    //put arm down

    mav(0,500);
    mav(1,500);
    msleep(1050);
    //backwards 
return 0;
}