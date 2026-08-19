#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,D,root1,root2,real,imag;
printf("enter coefficients a,b,c:");
scanf("%f %f %f",&a,&b,&c);
if(a==0)
{
printf("this is not a quadratic equation\n");
}
D=b*b-4*a*c;
if(D>0)
{
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("roots are real and different\n");
printf("root 1 =%.2f\n", root1);
printf("root 2 =%.2f\n", root2);
}
else if (D==0)
{
root1=-b/(2*a);
printf("roots are real and same\n");
printf("root 1 =%.2f\n",root1);
printf("root 2 =%.2f\n",root2);
}
else 
{
printf("roots are complex\n");
}
return 0 ;
}
