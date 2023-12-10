#include "main.h"
/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
unsigned int n = 1;
char *i = (char *)&n;
if (*i == 1)
return (1);
else
return (0);
}
