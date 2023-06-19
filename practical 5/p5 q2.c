//q2
#include<stdio.h>
int main()
{
    int counte=1,total=0,x;
    float ave;
    while(counte<=10)
    {
        printf("enter your %d paper marks:",counte);
        scanf("%d",&x);
        total=total+x;
        counte++;
    }
    ave=total/10;
    printf("Average is %f",ave);
    if(ave>0&&ave<50)
    {
        printf("\n fail\n");
    }
    else if(ave>50)
    {
        printf("\n pass");
    }
    else
    {
        printf("invalid");
    }

}
