#include<stdio.h>
int main ()
{
int a;
int b;
int c;
printf("enter value of a");
scanf("%d", &a);
printf("enter value of b ");
scanf("%d", &b);
printf("before swaping : a=%d,b=%d\n",a,b);
c=b;
printf("new value of a is %d\n" ,c);
c=a+b;
printf("new value of b is %d\n", c-b);
return 0;
}
