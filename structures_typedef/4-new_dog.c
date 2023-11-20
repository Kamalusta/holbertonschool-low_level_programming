#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - Returns pointer to newly allocated space which contains a string
 * @str: String to be copied
 *
 * Return: Pointer to new string identical to str, NULL if str = NULL
 */
char *_strdup(char *str)
{
char *s;
int i = 0;
int len;
if (!str)
return (NULL);
while (*(str + i))
++i;
len = i;
s = malloc(sizeof(char) * (len + 1));
if (!s)
return (NULL);
for (i = 0; i <= len; ++i)
*(s + i) = *(str + i);
return (s);
}
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
dog->name = _strdup(name);
if (!(dog->name))
return (free(dog), NULL);
dog->age = age;
dog->owner = _strdup(owner);
if (!(dog->owner))
return (free(dog->name), free(dog), NULL);
return (dog);

}
