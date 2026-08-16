#include<stdio.h>
int main()
{
int a,b ;
printf("enter value of a" );
scanf("%d", &a);
printf("enter value of b");
scanf("%d", &b);
printf("area of rectangle is %d\n", a*b);
printf("perimeter of rectangle is %d\n", 2*(a+b) );
printf("int     = %zu byte(s)\n", sizeof(int));
return 0;
}
