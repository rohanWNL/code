#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0,n,b;
printf("\n rohan karayat");
printf("\n enter number=");
scanf("%d",&a);
b=a;
while(a>0)
{
n=a%10;
sum=sum+n*n*n;
a=a/10;
}
if(sum==b)
{
printf("\n entered number is an armstrong number");
}
else
{
printf("\n entered number is not an armstong number");
}
getch();}