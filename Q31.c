// program to take a number as input and print its equivalent binary representatioon
#include<stdio.h>
int main()
{
int n ;
printf("enter a number n\n");
scanf("%d", & n);
int i;
if(n==0){
printf("binary=0\n");
return 0;
}
int power=1;
while(power<=n)
{
power=power*2;
}
power=power/2;
printf("binary=");
while (power>=1)
{
if(n>=power)
{
printf("1");
n=n-power;
}
else
{
printf("0");
}
power=power/2;
}
printf("\n");
return 0 ;
}
