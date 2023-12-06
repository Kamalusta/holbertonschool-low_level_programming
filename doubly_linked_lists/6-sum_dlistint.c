#include "lists.h"

/**
 * sum_dlistint - check the code
 * @head: - head node
 *
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (!head)
return (0);
while (head->next)
{
head = head->next;
sum += head->n;
}
return (sum);
}
