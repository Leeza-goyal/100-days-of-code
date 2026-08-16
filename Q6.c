#include<stdio.h>
int main ()
{
int a=10;
int b=20;
int c=b;
printf("original value of a is %d\n",a);
printf("original value of b is %d\n" ,b);
printf("after swaping a and b\n");
printf("new value of a is %d\n" ,c);
printf("new value of b is %d\n", c-a);
return 0 ;
}
