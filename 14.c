#include <stdio.h>
int main()
{
printf("rohan karayat\n");
int a,square, num;
printf("Enter your number\n");
scanf("%d",&num);
a=num%10;
square=num*num;
if(a == 5)
{
printf("Square of the given number is %d\n", square);
}
else
{
printf("Invalid number\n");
}
return 0;