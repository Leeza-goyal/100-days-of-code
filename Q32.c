// write a program to check if a number is palidrome
#include<stdio.h>
int main()
{
int n, original,rev=0,digit;
printf("enter a number n\n");
scanf("%d", & n);
while (n!=0)
{
digit=n%10;
rev=rev*10+digit;
n/=10;
}
if(original==rev)
{
printf("palindrome\n");
}
else
{
printf("not palindrome\n");
}
return 0 ;
}

