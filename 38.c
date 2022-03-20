#include<stdio.h>
int main()
{
printf("rohan karayat \n");
int x,y;
int swap(int * ,int *);
printf("enter the value of x and y\n"); 
scanf("%d %d",&x,&y);
swap(&x,&y);
printf("\n x=%d y=%d",x,y);
return 0;
}
int swap(int *a , int *b)
{
int k;
k=*a;
*a=*b;
*b=k;
printf("\n a=%d b=%d",*a,*b);
}