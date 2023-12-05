#include "lists.h"

/**
 * add_node_end - check the code
 * @head: -head node
 * @str: - string
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
list_t *last = *head;
newnode = malloc(sizeof(list_t));
if (!newnode)
return (NULL);
newnode->str = strdup(str);
newnode->len = strlen(str);
newnode->next = NULL;
if (!(*head))
{
*head = newnode;
return (newnode);
}
while (last->next != NULL)
last = last->next;
last->next = newnode;
return (newnode);
}
