#include <stdio.h>
int main()
{
float temperature ;
printf("enter temperature in degree celsius ");
scanf("%f", &temperature);
printf("temperature in fahrenheit is : %f\n" , (temperature*1.8)+32 );
return 0 ;
}
