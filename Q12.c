#include<stdio.h>
int main()
{
int integer;
printf("enter an integer\n");
scanf("%d", &integer);
if(integer<0)
{printf("entered integer is negative\n");
}
if(integer>0)
{
printf("entered integer is positive\n");
}
else {
printf("entered number is zero\n");
}
return 0;
}
