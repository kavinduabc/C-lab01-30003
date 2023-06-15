
//q1
#include<stdio.h>
int main()
{
    int nu1,nu2,max;
    printf("enter your two number:");
    scanf("%d%d",&nu1,&nu2);
    if(nu1>nu2)
        max=nu1;
    else
        max=nu2;
    printf("%d is highest number\n",max);
    printf("\n\n\n");
//q3
  char ename[30];
  float bsa;
  float nsa;
  printf("enter your employee name:");
  scanf("%s",&ename);
  printf("Employee name is %s\n",ename);
  printf("enter your basic salary:",bsa);
  scanf("%f",&bsa);
   if(bsa<=5000)
    nsa=bsa+5.0/100.0*bsa;
   else if(bsa>5000&&bsa<10000)
    nsa=bsa+(10.0/100.0)*bsa;
   else
    nsa=bsa+(15.0/100.0)*bsa;
   printf("%f is new salary\n",nsa);



}//q2
#include<stdio.h>
int main()
{
    int n1,n2,n3,max,sml;
    printf("enter your three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    max=n1;
    if(n2>max)
        max=n2;
    if(n3>max)
        max=n3;
    printf("%d is largest value",max);
    printf("\n\n\n");
    sml=n1;
    if(n2<sml)
        sml=n2;
    if(n3<sml)
        sml=n3;
    printf("%d is smallest value",sml);
}//q4
#include<stdio.h>
 int main()
 {
     float diameter,circumference,area;
     printf("enter your diameter:");
     scanf("%f",&diameter);
     area=3.14159*(diameter*diameter)/4;
     circumference=3.14159*(diameter);
     printf("Area is %f\n\n",area);
     printf("Circumference is %f\n\n",circumference);
}

q5
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter your two numbers:");
    scanf("%d%d",&n1,&n2);
    printf("\n\n\n");
    printf("%d is multiple of %d",n1,n2);
}
}//q6
#include<stdio.h>
int main()
{
    char ul,ll,sym;
    int n1;
    printf("enter your variables:");
    scanf("%c%c%c%d",&ul,&ll,&sym,&n1);
    printf("your uppercase letter is%c\n\n",ul);
    printf("your lowercase letter is%c\n\n",ll);
    printf("your symbol is %c\n\n",sym);
    printf("%d is digit",n1);

}
//q7
#include<stdio.h>
int main()
{
    float bs,sla_1,rem;
    char city[12];
    printf("enter your basic salary:");
    scanf("%f",&bs);
    printf("enter your currently work city:");
    scanf("%s",&city);
    if(city=='C')
        sla_1=bs+2500;
    else
        sla_1=bs+bs*10/100;
    printf("\n\n\n");
    if(sla_1>0&&sla_1<25000)
        rem=sla_1*110/100;
    else if(sla_1>25000&&sla_1<50000)
        rem=sla_1*112/100;
    else
        rem=sla_1*115/100;

    printf("your remuneration is %f",rem);
}
