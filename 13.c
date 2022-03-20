#include <stdio.h>
int main()
{
printf("rohan karayatn");
printf("to check whether a number is greater than 100 and less than 1000 or not\n");
int num;
printf("enter a number\n");
scanf("%d", &num);
if ((num > 100) && (num < 1000))
{
printf("Yes\n");
}
else
{
printf("No");
}
return 0;
}
