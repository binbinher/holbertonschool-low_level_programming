#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d:the dog to be initialized.
 * @name: name of the dog
 * @age:age of dog
 * @owner:owner of the dog
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
