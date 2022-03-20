#include<stdio.h>
 
int main()
{
printf("Rohn karayat\n");
int a=30,b=60;
printf("before swap a=%d \n",a); 
printf("before swap b=%d \n",b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap a=%d \n",a); 
printf("after swap b=%d \n",b) ;
return 0;
}