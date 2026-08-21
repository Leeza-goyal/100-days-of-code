#include<stdio.h>
int main ()
{
int units;
int bill;
printf("enter number of units consumed\n");
scanf("%d", &units);
if(units<=100)
{
bill=units*5;
printf("electricity bill is rupees %d\n", bill);
}
else if(units<=200)
{
bill=(100*5)+(units-100)*7;
printf("electricity bill is rupees %d\n", bill);
}
else if(units<=300)
{
bill=(100*5)+(100*7)+(units-200)*10;
printf("electricity bill is rupees%d\n", bill);
}
else if(units>300)
{
bill=(100*5)+(100*7)+(100*10)+(units-300)*12;
printf("electricity bill is rupees %d\n", bill);
}
return 0;
}
