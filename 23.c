#include <stdio.h> 
#include <stdlib.h>
void main()
{
printf("Rohan karayat\n");
int num;
printf("Enter a number\n"); 
scanf("%d", &num);
if (num % 2 == 0)
goto even;
else
goto odd;
even:
printf("%d is even\n", num); 
exit(0);
odd:
printf("%d is odd\n", num);
}