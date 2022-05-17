#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: Pointer to type struct dog
 * Return: No
 */

void print_dog(struct dog *d)
{
	if(d)
	{
		if(d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
	       	{
			printf("Name: (nil)\n");
		}
		printf("Age: %f", d->age);
		if(d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
	       	{
			printf("Owner: (nil)\n");
		}
	}
}

