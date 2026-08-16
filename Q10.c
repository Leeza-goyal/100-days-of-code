#include<stdio.h>
int main()
{
int time;
printf("enter time in seconds\n");
scanf("%d", &time);
int hours=time/3600;
int minutes=(time%3600)/60;
int seconds= (time%60);
printf("time in hours:minutes:seconds=%d:%d:%d\n", hours,minutes,seconds);
return 0 ;
}

