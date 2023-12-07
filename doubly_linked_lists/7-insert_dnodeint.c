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
if (!(*h))
{
*h = newnode;
return (newnode);
}
for (i = 0; i < idx; i++)
{
if (!last->next)
{
last->next = newnode;
newnode->prev = last;
newnode->next = NULL;
return (newnode);
}
last = last->next;
}
newnode->next = last;
newnode->prev = last->prev;
last->prev = newnode;
if (newnode->prev)
newnode->prev->next = newnode;
else
*h = newnode;
return (newnode);
}
