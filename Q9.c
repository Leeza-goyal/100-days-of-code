#include<stdio.h>
#include<math.h>
int main ()
{
float principal;
float rate;
float time;
printf("enter value of principal \n");
scanf("%f", &principal);
printf("enter value of rate\n");
scanf("%f",& rate);
printf("enter value of time in years\n");
scanf("%f", & time);
printf("simple interest is : %.2f\n", (principal*rate*time)/100 );
printf("compound interest is : %.2f\n", principal*pow(1+rate/100,time)-principal);
return 0 ;
}
