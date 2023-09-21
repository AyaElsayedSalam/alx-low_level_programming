#include "lists.h"
/**
 * add_node -a function that adds a new node at the beginning of a list.
 * Return: the address of the new element, or NULL if it failed
 * @head: pointer to head linked list
 * @str: pointer to string
 */
list_t *add_node(list_t **head, const char *str)
{
	char *duplicate_str;
	int len = 0, i = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate_str = strdup(str);
	if (duplicate_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0 ; str[len]; i++)
		len++;

	new_node->str = duplicate_str;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
