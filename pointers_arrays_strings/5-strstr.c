#include "main.h"
#include <stdio.h>

/**
 * _strstr - check the code
 * @haystack: pointer
 * @needle: pointer 2
 *
 * Return: Always pinter to char
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0;
int j;
for (j = 0; haystack[j]; j++)
{
if (haystack[j] == needle[i])
i++;
else
i = 0;
if (needle[i] == '\0')
break;
}
if (needle[i] == '\0')
return (haystack + (j - i));
else
return (0);
}
