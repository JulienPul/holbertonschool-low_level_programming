#include<stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100, followed by a new line.
 * Description: or multiples of three print Fizz instead of the numbe
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: 0 or value
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)

	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
			printf("\n");
			return (0);
}
