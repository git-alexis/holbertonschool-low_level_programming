#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - variable of type struct dog
 *
 * Description: 'This function initialize a variable of type struct dog
 * and return nothing'
 *
 * @d: Struct dog pointer
 * @name: Char pointer
 * @age: Float variable
 * @owner: Char pointer
 *
 * Return: Nothing
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
