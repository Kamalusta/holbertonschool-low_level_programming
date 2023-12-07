#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head: - head node
 * @index: - index node
 *
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
size_t i = 0;
dlistint_t *current = (*head);
if ((*head) == NULL || !(*head)->next)
{
(*head) = NULL;
return (1);
}
if (index == 0)
{
(*head)->next->prev = NULL;
(*head) = (*head)->next;
return (1);
}
for (i = 0; i < index; i++)
{
current = current->next;
if (!current)
return (-1);
}
current->prev->next = current->next;
current->next->prev = current->prev;
return (1);
}
