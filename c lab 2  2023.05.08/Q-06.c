#include <stdio.h>
int main()
{
    //Declaring variable
    char name[30];
    int b_year, age;
    printf("Enter Student Name    :");
    scanf("%s",&name);
    printf("Enter your Birth Year :");
    scanf("%d",&b_year);
    age = (2023 - b_year);
    //Display Output
    printf("Name is %s and age is %d", name, age);

    return 0;
}
