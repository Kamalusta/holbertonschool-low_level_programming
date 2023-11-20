#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 * @d: struct
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (!d)
return;
else
{
if (!d->name)
d->name = "(nil)";
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
if (!d->owner)
d->owner = "(nil)";
printf("Owner: %s\n", d->owner);
}
}
