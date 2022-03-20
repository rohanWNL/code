#include <stdio.h>
int main()
{
printf("rohan karayat\n");
int a=0, num;
printf("enter the value of num \n");
scanf("%d", &num);
printf("\n");
do
{
printf("%d\n" , a+1);
a++;
} while (a < num);
return 0;
}