#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - create and initilize dog object
 * @d: pointer to dog object
 * @name: dog name
 * @age: dog age
 * @owner: doge owner name
 *
 * Return: void, and set dog object through pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
