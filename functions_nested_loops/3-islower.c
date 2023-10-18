#include "main.h"
/**
 * _islower - check the code gor lower case
 *@c: The char to be cheked
 *
 * Return: Always 1 is succes.
 */
int _islower(int c)
{
if (c > 96 && c < 123)
return (1);
else
return (0);
}
