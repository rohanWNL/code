#include <stdio.h>
int sumofDigits (int num);
int main()
{
int num, sum;
printf("rohan karayat\n");
printf("Enter any number to find sum of digits: ");
scanf("%d" , &num);
sum = sumofDigits(num);
printf("Sum of digits of %d = %d" , num, sum);
return 0;
}
int sumofDigits(int num)
{
if(num == 0)
return 0;
return ((num % 10) + sumofDigits(num / 10));
}