#include<stdio.h>
int main ()
{
float cp,sp,percentage;
printf("enter cost price\n");
scanf("%f", &cp);
printf("enter selling price\n");
scanf("%f", &sp);
if(sp>cp)
{
percentage=((sp-cp)/cp)*100;
printf("profit=%.2f%%\n",percentage);
}
else if (cp>sp)
{
percentage=((cp-sp)/cp)*100;
printf("loss=%.2f%%\n", percentage);
}
else
{
printf("no profit no loss\n");
}
return 0 ;
}
