#include "lists.h"

/**
 * free_list - check the code
 * @head: - head node
 *
 * Return: Always 0.
 */
void free_list(list_t *head)
{
while (head)
{
free(head->str);
free(head);
head = head->next;
}
}
