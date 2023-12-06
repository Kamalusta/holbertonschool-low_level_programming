#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head: - head node
 * @index: - idex of node
 *
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t i;
for (i = 0; i < index; i++)
head = head->next;
return (head);
}
