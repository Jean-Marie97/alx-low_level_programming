#include "lists.h"
#include <string.h>

/**
* add_node_end - adds a new node at the end
* @head: head of list
* @str: string
* Description: adds a new node at the beginning of a list_t list.
* Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)

{
char *duplicate;
unsigned int i;
list_t *new, *last;
duplicate = strdup(str);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
if (str == NULL)
{
free(new);
return (NULL);
}
i = 0;
while (str[i] != '\0')
i++;
new->str = duplicate;
new->len = i;
new->next = NULL;
if (*head == NULL)
{
*head = new;
}
else
{
last = *head;
while (last->next != NULL)
last = last->next;
last->next = new;
}
return (*head);
}
