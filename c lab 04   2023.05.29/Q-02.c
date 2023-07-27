#include <stdio.h>
int main()
{
    //Declaring variable
    int no1, no2, no3, large, small;
    printf("Enter Three Integer Numbers :");
    scanf("%d %d %d", &no1, &no2, &no3);
    large = no1;
    small = no1;
        if (no2 > large)
            large = no2;
        else if(no2 < small)
            small = no2;
            if(no3 > large)
                large = no3;
            if(no3 < small)
                small = no3;
    //Display Output
            printf("%d is a Largest Value \n", large);
            printf("%d is a Smallest Value", small);

            return 0;
}
