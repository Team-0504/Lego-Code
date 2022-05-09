#include <kipr/wombat.h>
int neg_right_turn = -4300;
int right_turn = 2000;

int count =0;
int close = 2800;
//range for analog 2 is from 18-29
int main()
{
//this is edited so that an ET sensor exists and limits the possibility of error when backing up to the PCR machine, which in turn affects the capture of botguy
    shut_down_in(119);
    msleep(3000);
    cmpc(0);
    cmpc(1);
    while(gmpc(0)<2500)
    {
        mav(0,1000);
        msleep(100);
    } //turn for rocka stack
    while(gmpc(0)>0)
    {
        mav(0,-1000);
        msleep(100);
    } //unturn for rocka stack
    cmpc(0);
    cmpc(1);
    while((digital(0)==0)&&(digital(1)==0)) //or?
    {
        mav(0,1000);
        mav(1,1000);
        msleep(10);
        
       if (digital(0)==1)
	{
	 mav(1, 200);
	 mav(0,0);
	 msleep(100);
	}
	if (digital(1)==1)
	{
	 mav(0,200);
	 mav(1,0);
	 msleep(100);
	}
     }
     ao();

 //hits first wall with sensors 

    cmpc(0);
    cmpc(1);
    enable_servos(1);
    set_servo_position(1,500);
    
    while(gmpc(1)>neg_right_turn)
          {
              mav(1,-500);
              mav(0,-250);
              mav(2,1000);
              msleep(100);
          }
    ao();
    cmpc(0);
    cmpc(1);
    while(analog(1)<3100) //till first black line
    {
        mav(0,-1000);
        mav(1,-1000);
        mav(2,1000);
        msleep(100);
    }
    ao();
    
    mav(0,-1000);
    mav(1,-1000);
    msleep(500);
    ao();
    
    cmpc(0);
    cmpc(1);
    while(gmpc(0)<right_turn)
    {
        mav(0,500);
        msleep(100);
    }
    ao();
    cmpc(0);
    cmpc(1);
    while(gmpc(0)<1000);
    {
        mav(0,-100);
        mav(1,-100);
        msleep(100);
    }
	while (analog(2)<= close); //make sure this is right port and that this functions as 'close'
	{
	mav(0,-200);
	mav(1,-200);
	msleep(100);
	}
    //under transporter
    ao();

    cmpc(0);
    cmpc(1);
    set_servo_position(1,1800); //why doesn't this lift :((
    msleep(3000);
    set_servo_position(1,500);
    mav(0,1000);
    mav(1,1000);
    msleep(300);
    set_servo_position(1,600);
    
    ao();
    cmpc(0);
    cmpc(1);
    while(gmpc(2)<23000)
    {
        mav(2,1000);
        msleep(100);
    }
    while(gmpc(0)<5250)
    {
        mav(0,1000);
        mav(1,-1000);
        msleep(100);
    }
    cmpc(0);
    cmpc(1);
    

	while ((digital(0)==0)||(digital(1)==0)) //why is this an or?
	{
	mav(0,1000);
        mav(1,1000);
        mav(2,-1000);
        msleep(10);

	if (digital(0)==1)
	{
	mav(1,300);
	mav(0,0);
	msleep(100);
	}
	
	if (digital(1)==1)
	{
	mav(1,0);
	mav(0, 300);
	msleep(100);
	}
        
    }
    ao();
    cmpc(0);
    cmpc(1);
    while(gmpc(0)>-3700)
    {
        mav(0,-1000);
        mav(1,-1000);
        mav(2,-1000);
        msleep(100);
    }
    ao();
    cmpc(0);
    cmpc(1);
    
   while(gmpc(0)>-2600)
   {
       mav(0,-1000);
       mav(2,-1000);
       msleep(100);
   }
    //yes im labling this
    //this is the 'right' turn that heads towards the transporter 
    
    ao();
    cmpc(0);
    cmpc(1);
    
	while(analog(2)<close)
	{	
	mav(0,-1000);
	mav(1,-1000);
	msleep(100);
	set_servo_position(1,1800);
	}
	ao();
//this should back up until the ET sensor sees the transporter w/ the claw up



	while(gmpc(0)<-200);
	{
	mav(0,-100);
	mav(1,-100);
	msleep(100);
	}
//go back a lil


	set_servo_position(1,500);
	msleep(100);
//claw upp

cmpc(0);
cmpc(1);
	while(gmpc(0)<2000);
	{
	mav(0,500);
	mav(1,500);
	msleep(100);
	}
//go forward and deal with the poms heree





  
    
    ao();
    return 0;
}

