#include<stdio.h>
int main()
{
int a;
int b;
printf("enter value of a\n");
scanf("%d", &a);
printf("enter value of b\n");
scanf("%d", &b);
printf("before swapping: a=%d,b=%d\n",a,b);
printf("after swaping\n");
a=a+b;
printf("value of b is %d\n" , a-b);
b=a-b;
printf("value of a is %d\n",a-b );
return 0;

}
