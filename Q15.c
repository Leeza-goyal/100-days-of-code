#include<stdio.h>
int main()
{
char ch ;
printf("enter a character\n");
scanf("%c", &ch);
if(ch>='A' && ch<='Z' )
{
printf("entered character is a uppercase alphabet\n ");
}
else if(ch>='a' && ch<='z')
{
printf("entered character is a lowercase alphabet\n");
}
else if(ch>=0 && ch<=9)
{
printf("entered character is a digit\n");
}
else
{
printf("entered value is a special character\n");
}
return 0 ;
}

