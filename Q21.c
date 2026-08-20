#include<stdio.h>
int main()
{
int number;
printf("enter any number from 1-12\n");
scanf("%d", &number);
switch (number)
{
case 1 : printf("january\n");
printf("number of days : 31\n");
break;
case 2 : printf("february\n");
printf("number of days : 28\n");
break;
case 3 : printf("march\n");
printf("number of days : 31 days\n");
break;
case 4 : printf("april\n");
printf(" number of days : 30 days\n");
break;
case 5 : printf("may\n");
printf("number of days is:31 days\n");
break;
case 6 : printf("june\n");
printf("number of days is : 30 days\n");
break;
case 7 :printf("july\n");
printf("number of days is : 31 days\n");
break;
case 8 :printf("august\n");
printf("number of days is: 31 days\n");
break;
case 9: printf("september\n");
printf("number of days is : 30 days\n");
break;
case 10 : printf("october\n");
printf("number of days is : 31 days\n");
break;
case 11: printf("november\n");
printf("number of days : 30 days\n");
break;
case 12 : printf("december\n");
printf("number of days : 31 days\n");
break; 
}
return 0 ;
}

