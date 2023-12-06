#include "lists.h"

/**
 * free_dlistint - check the code
 * @head: - head node
 *
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
while (head)
{
free(head);
head = head->next;
}
}
