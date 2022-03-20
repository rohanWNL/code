#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,r;
printf("\n rohan karayat");
printf("\n enter the number=");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
b=b*10+r;
a=a/10;
}
printf("\n revrese=%d",b);
getch();
}