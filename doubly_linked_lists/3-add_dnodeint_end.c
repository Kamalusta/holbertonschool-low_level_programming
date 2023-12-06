#include "lists.h"

/**
 * add_dnodeint_end - check the code
 * @head: - head node
 * @n: - number
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newnode = malloc(sizeof(dlistint_t));
dlistint_t *last = (*head);
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = NULL;
if (!(*head))
{
newnode->prev = NULL;
*head = newnode;
}
else
{
while (last->next)
last = last->next;
last->next = newnode;
newnode->prev = last;
}
return (newnode);
}
