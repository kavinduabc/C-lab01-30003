#include <stdio.h>
int main()
{

    int no ;
    printf("Enter the Number:");
    scanf("%d", &no);
    switch(no % 2)
        {
            case 0:printf("%d is an Even", no);break;
            case 1:printf("%d is an Odd", no);break;
            default:printf("Invalid Number");
        }

    return 0;

}
