#include <stdio.h>
float avg(float a, float b, float c);
float avg(float a, float b, float c)
{
return ((a + b + c) / 3) ;
}

int main()

{
printf("Rohan karayat\n");
int num1, num2 , num3;
printf("Enter 3 numbers \n");
scanf("%d %d %d", &num1, &num2, &num3);
printf("Average of 3 numbers =%.2f", avg(num1, num2, num3));
return 0;
}