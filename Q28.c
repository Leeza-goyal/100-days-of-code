 #include<stdio.h>
int main()
{
int n;
printf("enter value of n\n");
scanf("%d", & n);
int product=1;
for(int i=1;i<=n;i++)
{
product=product*(2*i);
}
printf("product of even numbers is %d\n", product);
return 0 ;
}
