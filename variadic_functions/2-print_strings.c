#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: it is separator
 * @n: intiger count
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ls;
unsigned int i;
char *string;
va_start(ls, n);
for (i = 0; i < n; i++)
{
string = va_arg(ls, char*);
if (!string)
string = "(nil)";
printf("%s", string);
if (separator && i < n - 1)
printf("%s", separator);
}
va_end(ls);
printf("\n");
}
