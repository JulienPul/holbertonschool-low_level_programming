#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Generates a random number 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
{
if (n > 5)
printf("Last digit of %d is ", n % 10,);
else
printf(" and is greater than 5\n", n);
}
{
if (n == 0)
printf("Last digit of %d is ", n % 10,);
else
printf("and is 0\n", n);
}
{
if (n < 0)
printf("Last digit of %d is ", n % 10,);
else
printf("and is less than 6 and not 0\n", n);
}
return (0);
}
