#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: - head node
 * @n: - added number to new node
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode = malloc(sizeof(dlistint_t));
if (!newnode)
return (NULL);
newnode->n = n;
newnode->next = (*head);
newnode->prev = NULL;
if (*head)
(*head)->prev = newnode;
(*head) = newnode;
return (newnode);
}
