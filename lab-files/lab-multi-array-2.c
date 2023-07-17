#include<stdio.h>
int main()
{
    int x,y,z;
    int array[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
            printf("%d ",array[x][y]);
        }
        printf("\n");
    }
    printf("enter you metrix number ");
    scanf("%d",&z);
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
        {
        if(array[x][y]==z)
        printf("array[%d][%d]",x,y);
        }
    }

}
