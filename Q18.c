#include<stdio.h>
int main()
{
int marks;
printf("enter marks of student");
scanf("%d", & marks);
if(marks>=90 && marks<=100)
{
printf("grade A\n");
}
else if(marks>=80 && marks<=89)
{
printf("grade B\n");
}
else if(marks>=70 && marks<=79)
{
printf("grade C\n");
}
else if(marks>=69&& marks<=60)
{printf("grade D\n");
}
else if(marks>=0 && marks<=59)
{
printf("grade f\n");
}
else
{
printf("marks input is not defined\n");
}
return 0 ;
}
