#include <kipr/wombat.h>

int main()
{
    //mav(0,500);
    //mav(1,500);
    //msleep(2000);
    //forward
    
    enable_servos(1);

    set_servo_position (1, 450);
    //putting servo arm down (starts in up pos)
    
     set_servo_position (1, 1446);
    //servo arm up

    msleep(4000); 
    //hold arm in up position for 3 seconds

    set_servo_position(1,450);
    //put arm down

return 0;
}