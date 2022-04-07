#include <kipr/wombat.h>

int main()
{
   //starting from the last turn of actual 15 sec sketch
   //child is forcing towards audience, towards airlock
   //turns first
   //sensor now :)  use ir to follow black line
   
    cmpc(1);
    
    while (gmpc(1)< 1175) 
    {
        mav(0,-500);
        mav(1,500);
        //this turns right
    }

    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
    
    //insert sensor here
    
    while (analog(1)<1600)
    {
     mav(0,500);
     mav(1,500);
    }
    //use the sensor to follow black line
    //use arcing code here to smoothly follow line
    if (analog(1)>1650)
    {
        mav(0,500);
        mav(1,-500);
        
        
    
    
    mav(0,0);
    mav(1,0);
    msleep(500);
    //stop
     
    
    return 0;
}
