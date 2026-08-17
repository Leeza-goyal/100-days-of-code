#include<stdio.h>
int main ()
{
int a,b,c;
printf("enter value of a\n");
scanf("%d", &a);
printf("enter value of b\n");
scanf("%d", &b);
printf("enter value of c\n");
scanf("%d", &c);
if(a>=b && a>=c)
{
printf("value of a is largest\n");
}
else if(b>=a && b>=c)
{
printf(" value of b is largest\n");
}
else
{
printf("value of c is largest\n");
}
return 0;
}
