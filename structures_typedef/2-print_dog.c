#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL)
		{
		printf("nil\n");
		return;
		}
	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	printf("Owner: %s\n", d->owner);
}
