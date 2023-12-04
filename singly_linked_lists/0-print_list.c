#include "lists.h"

/**
 * print_list - check the code
 * @h: - node;
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
size_t i = 0;
size_t nbr;
char *strr;
while (h)
{
if (!h->str)
{
strr = "(nil)";
nbr = 0;
}
else
{
strr = h->str;
nbr = h->len;
}
printf("[%lu] %s\n", nbr, strr);
h = h->next;
i++;
}
return (i);
}
