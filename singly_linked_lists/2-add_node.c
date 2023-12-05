#include "lists.h"

/**
 * add_node - check the code
 * @head: - head node
 * @str: - string
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *newnode;
newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
