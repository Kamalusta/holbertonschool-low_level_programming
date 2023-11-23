#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: seperator
 * @n: integer
 *
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ls;
unsigned int i;
va_start(ls, n);
for (i = 0; i < n; i++)
  {
    printf("%d", va_arg(ls, int));
 if (separator && i < n-1)
   printf("%s", separator);
     }
 va_end(ls);
 printf("\n");
}
