#include<stdio.h>
#include<conio.h>
void main()
{
int num,r;
printf("\n rohan karayat");
printf("\n enter the value of number: ");
scanf("%d",&num);
r=num%10;
if(r==5)
{
num=num/10;
printf("\n the square is=%d%d",num*num++,r*r);}
getch();
}
