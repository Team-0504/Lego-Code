#include <kipr/wombat.h>

int turn = ____ value;


int main()
{
     while (analog(1)>3750)
    {
        mav(0,500);
        mav(1,500);
    }
    while (analog(1)<3750)
    {
        mav(0,500);
        mav(1,-500);
    }
    
    cmpc(0);
    cmpc(1);
    
    if (gmpc(0)>turn) && (analog(1)<3750)
    {
        mav(0,500);
        mav(1,-500;
     }
            cmpc(0);
            cmpc(1);
     else (gmpc(1)> other turn) && (analog (1)<3750)
     {
        mav(0,-500);
        mav(1,500);
     }
     
    return 0;
}
