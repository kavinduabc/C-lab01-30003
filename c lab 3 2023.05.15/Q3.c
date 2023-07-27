#include <stdio.h>
int main()
{
    //decalring variable
    float d_trav, time, avg_speed;

    printf("Enter Distance in meter = \n");
    scanf("%f", &d_trav);
    printf("Time Taken in second =\n");
    scanf("%f", &time);
    avg_speed = (d_trav / time);
    //Display output
    printf("Avg speed is %.2f 1/ms \n", avg_speed);

    return 0;
}
