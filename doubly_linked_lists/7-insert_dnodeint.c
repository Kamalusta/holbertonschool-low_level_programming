#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @h: - head node
 * @idx: - index of given node
 * @n: - given number
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
size_t i;
dlistint_t *last = (*h);
dlistint_t *newnode = malloc(sizeof(dlistint_t));
if (!newnode)
return (NULL);
newnode->n = n;
for (i = 0; i < idx; i++)
{
last = last->next;
if (!last)
return (NULL);
}
newnode->next = last;
if (last->prev)
{
last->prev->next = newnode;
last->prev = newnode;
newnode->prev = last->prev->prev;
}
else
newnode->prev = NULL;
return (newnode);
}
