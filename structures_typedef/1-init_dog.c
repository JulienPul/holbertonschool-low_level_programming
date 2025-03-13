#include "dog.h"
/**
 *  init_dog - function that initialize a variable of type struct dog
 *@name: nom
 *@age: age
 *@owner: owner
 *@d: pointer my dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != 0)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

