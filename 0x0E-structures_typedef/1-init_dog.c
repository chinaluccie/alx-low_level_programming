#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes var type dog
 * @d: pointer to dog structure
 * @name: dog name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: function initializes var type of dog
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
