#include <stdio.h>
int main()
{
printf("rohan karayat\n");
int num1 = 0, num2 = 1, a, num3, number;
printf("enter a number\n");
scanf("%d", &number);
printf("0, 1, ");
for ( a = 0; a <= number; a++)
{
num3 = num1 + num2;
printf("%d, ", num3);
num1 = num2;
num2 = num3;
}
return 0;
}