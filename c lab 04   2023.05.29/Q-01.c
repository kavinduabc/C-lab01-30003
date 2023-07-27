#include <stdio.h>
int main()
{
    //Declaring Variable
    int no1, no2, max;
    printf("Enter 2 Numbers:");
    scanf("%d %d", &no1, &no2);
    max = no1;
        if (no2 > max)
             max = no2;
    //Display Output
        printf("%d is Highest Number", max);

        return 0;
}
