#include "main.h"
/**
 * _abs - check the code for absolute
 *@c: The char to be cheked
 *
 * Return: Always 1 is succes.
 */
int _abs(int c)
{
if (c < 0)
return (c * -1);
else if (c > 0)
return (c);
else
return (c);
}
