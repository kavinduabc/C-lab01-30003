#include <stdio.h>
int main()
{
    //Declaring variable
    int no_1, no_2;
    printf("Enter First Number : ");
    scanf("%d", &no_1);
    printf("Enter Second Number: ");
    scanf("%d", &no_2);
    //Display Output
    printf("\nBefore Swap \n");
    printf("First Number : %d \n", no_1);
    printf("Second Number: %d \n", no_2);
    printf("\nAfter Swap \n");
    printf("First Number : %d\n", no_2);
    printf("Second Number: %d\n", no_1);

    return 0;
}
