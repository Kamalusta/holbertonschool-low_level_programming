#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - check the code
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
dog->name = name;
dog->age = age;
dog->owner = owner;
return (dog);
}
