#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,r=0;
printf("\n rohan karayat");
printf("\n enter any number:-");
scanf("%d",&n);
for(i=2;i<n-1;i++)
{if(n%i==0)
r=1;
break;
}
if(r==0)
{printf("\n prime number");}
else
{
printf("\n composite number");}
getch();
}