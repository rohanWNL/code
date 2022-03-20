#include<stdio.h>
#include<conio.h>
#define number 19
void main()
{

printf("rohan karayat\n ");
#if(number>0)
printf("value of is grester than 0=%d",number);
#else
printf("value of number is less than 0=%d",number);
#endif
getch();
}