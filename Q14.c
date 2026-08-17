#include<stdio.h>
int main()
{
char alphabet;
printf("input a character\n");
scanf("%c", & alphabet);
if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
{
printf("entered character is a vowel\n");
}
if( alphabet>=0)
{
printf("entered character is neither a consonant nor a vowel\n");
}
else
{
printf("entered character is a consonant\n");
}
return 0 ;
}
