#include "main.h"
#include <stdio.h>

/**
 * _atoi - check the code
 * @s: pointer
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
int i = 0;
int k = 0;
int num = 0;
int check = 0;
int mns = 0;
while (s[i] > 0)
i++;
for (k = 0; k < i; k++)
{
if (check == 0 && s[k] == '-')
mns++;
else if (check == 0 && s[k] == '+')
mns--;
else if (check != 2 && (s[k] >= '0' && s[k] <= '9'))
{
num = num * 10 + s[k] - '0';
check = 1;
}
else if (check == 1)
check = 2;
}
if (mns > 0)
return (-num);
else
return (num);
}
