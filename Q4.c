#include<stdio.h>
int main()
{
float radius=3 , area , circumference ;
area = 3.14*radius*radius;
circumference = 2*3.14*radius;
printf(" area of circle is %f\n", area );
printf("circumference of circle is %f\n", circumference);
printf("float     = %zu byte(s)\n", sizeof(float));
return 0 ;
}
