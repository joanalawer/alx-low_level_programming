/**
 * ALX Project 0x0E by Julien Bardier
 * Solution Repo by: Joana Lawer
 */

#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Function initializes a variable of type struct dog
 * @dog: name for struct type
 * @d: pointer for struct type
 * @name: pointer to element name
 * @age: element age
 * @owner: pointer to elemnet owner
 * Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
		d->name = name;
		d->age = age;
		d->owner = owner;
}
