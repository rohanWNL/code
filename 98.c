#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int t;
float r,p,SI,x,CI;
printf("\n rohan karayat");
printf("\n enter the time=");
scanf("%d",&t);
printf("\n enter the rate=");
scanf("%f",&r);
printf("\n enter the principle=");
scanf("%f",&p);
SI=(p*r*t)/100;
x=(1+r)/100;
CI=p*pow(x,t);
printf("\n simple interest=%f",SI);
printf("\n compound interest=%f",CI);
getch();}