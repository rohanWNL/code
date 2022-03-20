#include <stdio.h> 
int main()
{
printf("Rohan karayat\n");
float rad, area, peri, pi = 4.12;
printf("enter the radius of circle \n"); 
scanf("%f", &rad);
area = pi * rad * rad;
peri = 2 * pi * rad;
printf("area of circle is %f \n", area);
printf("perimeter of circle is %f \n", peri); 
return 0;
}
