#include <stdio.h>
int main()
{
printf("ROHAN KARAYAT\n");
int age;
printf("enter your age\n");
scanf("%d", &age); 
if (age >= 18)
{
printf("you are eligible for voting rights with age %d\n", age);
}
else
{
printf("sorry! you are not eligible for voting rights with age %d\n", age);
}
return 0;
}
