#include <stdio.h>
int main()
{
    //Decalaring Variable
    int choice;
    float radius, circumference, area, volume;
   printf("MENU:\n1. Circumference of a Circle\n2. Area of a Circle\n3. Volume of a Sphere\n4. Exit");
    //While Loop
    while(1)
    {
        printf("\nSelect the disired choice :");
        scanf("%d", &choice);
        //If Condition
            if (choice == 4)
            {
                printf("Exiting the program.\n");

            }
                printf("Enter the radius :");
                scanf("%f", &radius);
                    //...Switch Condition
                    switch(choice)
                    {
                         //...Pocess to find the circumferenc
                    case 1 : circumference = (2 * M_PI * radius);
                        printf("Circumference of a Circle is(m) %.2f\n", circumference );break;
                    case 2 : area = (M_PI * radius * radius);
                        printf("Area of a Circle is(squar m) %.2f\n", area );break;
                    case 3 : volume = ((M_PI * radius* radius * radius * 4)/3);
                        printf("Volume of a Sphere is(cubic m) %.2f\n", volume );break;
                        break;
                    default: printf("Error: Invalid.\n");

                    }

    }
    return 0;
}
