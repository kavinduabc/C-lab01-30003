//q3
#include<stdio.h>
int main()
{
    int no,fac=1;
    printf("enter your number:");
    scanf("%d",&no);
    if(no==0)
    {
        printf("%d's factorial is 1",no);
    }
    else{
        while(no>0)
        {
        fac=fac*no;
        no--;

        }
        printf("factorial is %d",fac);
    }
}
