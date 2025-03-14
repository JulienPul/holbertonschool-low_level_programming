#ifndef DOG_H
#define DOG_H

/**
 *  struct dog - Structure représentant un chien
 * @name: Nom du chien (chaîne de caractères)
 * @age: Âge du chien (flottant)
 * @owner: Propriétaire du chien (chaîne de caract�s)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
