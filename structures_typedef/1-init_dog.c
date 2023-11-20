#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
/**
 * init_dog - check the code
 * @d: struct name
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
