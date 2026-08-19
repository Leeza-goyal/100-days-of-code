#include<stdio.h>
int main()
{
int a,b,c;
printf("enter value of a\n");
scanf("%d", &a);
printf("enter value of b\n");
scanf("%d", &b);
printf("enter value of c\n");
scanf("%d", &c);
if(a==b && b==c && c==a)
{
printf("according to sides of triangle entered the triangle is equilateral\n");
}
else if(a==b || b==c || c==a)
{
printf("according to sides of triangle entered the triangle is isosceles\n");
}
else
{
printf("according to sides of triangle entered the triangle is scalene\n");
}
return 0;
}
