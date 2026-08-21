#include<stdio.h>
int main ()
{
int fine;
int days;
printf("enter number of late days\n");
scanf("%d", &days);
if(days==0)
{
printf("no fine\n");
}
else if(days<=5)
{
fine=days*2;
printf("you need to pay fine :rupees %d\n", fine);
}
else if(days<=10)
{
fine=(5*2)+(days-5)*4;
printf("you need to pay fine of : rupees %d\n", fine);
}
else if(days<=30)
{
fine=(5*2)+(5*4)+(days-10)*6;
printf("you need to pay fine of : rupees %d\n", fine);
}
else
{
printf("membership cancelled\n");
}
return 0;
}


