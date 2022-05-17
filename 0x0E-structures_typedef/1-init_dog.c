#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: Pointer to type struct dog
 * @name: Pointer to char dog's name
 * @age: Age of dog
 * @owner: Pointer to char dog's owner
 * Return: No
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

