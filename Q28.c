#include<stdio.h>
int main()
{
int n;
printf("enter value of n\n");
scanf("%d", & n);
int product=1;
for(int i=1;i<=n;i++)
{
if(i%2==0){
product=product*i;
}
}
printf("product of even numbers is %d\n", product);
return 0 ;
}
