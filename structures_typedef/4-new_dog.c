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
int i = 0;
int j;
char *name2, *owner2;
dog_t *dog;
while (*(name + i))
{
i++;
}
name2 = malloc(i + 1);
for (j = 0; j < i; j++)
name2[j] = name[j];
i = 0;
while (owner[i])
i++;
owner2 = malloc(i + 1);
for (j = 0; j < i; j++)
owner2[j] = owner[j];
dog = malloc(sizeof(dog_t));
if (!dog)
return (NULL);
dog->name = name2;
dog->age = age;
dog->owner = owner2;
return (dog);
free(dog);
free(name2);
free(owner2);
}
