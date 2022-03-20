#include <stdio.h>
int main()
{
printf("rohan karayat\n");
int num,a=1,sum=0;
printf("enter the number\n");
scanf("%d",&num); 
while (a<=10)
{
printf("%d * %d= %d\n",num,a,num*a);
sum+=num*a;
a++;
}
printf("sum = %4d",sum);
return 0;
}