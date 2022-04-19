#include <kipr/wombat.h>

int main()
{
    enable_servos(1);
    set_servo_position(1,1446);
    
    mav(0,-500);
    mav(1,-500);
    msleep(3000);
    
    
    set_servo_position(1, 450);
    
    mav(0,0);
    mav(1,0);
    msleep(500);
    
    mav(0,500);
    mav(1,500);
    msleep(9000);
    
    
    return 0;
}
