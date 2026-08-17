#include<stdio.h>
int main()
{
int year ;
printf("enter year");
scanf("%d", &year);
if( (year%4==0) || (year%100!=0) )
{
printf("the entered year is leap year\n");
}
else
{
printf("the entered year is not leap year\n");
}
return 0 ;
}
