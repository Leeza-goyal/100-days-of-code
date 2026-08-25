#include<stdio.h>
int main()
{
int n;
int factorial=1;
printf("enter value of n\n");
scanf("%d", &n);
for(int i=1;i<=n;i++)
{
factorial=factorial*i;
printf("result=%d\n", factorial);
}
return 0 ;
}
