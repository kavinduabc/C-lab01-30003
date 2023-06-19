#include<stdio.h>
int main()
{
    int mon_number;
    printf("enter your month number:");
    scanf("%d",&mon_number);
    switch(mon_number)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d month has 31 days",mon_number);
        break;

    case 2:
        printf("%d month has 28 days",mon_number);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d month has 30 days",mon_number);
        break;
    default:
        printf("%d is invaild",mon_number);


    }
}
