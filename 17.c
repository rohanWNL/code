#include<stdio.h>
int main()
{
printf("Rohan karayat\n"); 
int num,numm, sum= 0,a;
printf("Enter any number to check whether it is Armstrong or not = "); 
scanf( "%d",&num );
numm=num;
while(num!=0)
{
a=num%10;
num=num/10;
sum=sum+(a*a*a);
}
if(sum==numm)
printf ("%d is an Armstrong number", numm);
else printf("%d is not an Armstrong number",numm);
return 0;
}
