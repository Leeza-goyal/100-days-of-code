#include<stdio.h>
int main ()
{
int a,b ;
float quotient;
printf("enter value of a ");
scanf("%d", &a);
printf("enter value of b");
scanf("%d", &b);
printf("sum of two numbers is %d\n" , a+b);
printf("difference of two numbers is %d\n", a-b);
printf("product of two numbers is %d\n", a*b);
if ( b != 0 )
{
quotient=(float) a/b;
printf("quotient = %f\n", quotient);
}
else
{
printf("quotient = cannot divide by zero\n");
}
return 0 ; 
}
