#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list.
 * Return: the number of nodes
 * @head: pointer to head linked list
 * @str: pointer to string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate_str;
	int len = 0, i;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	duplicate_str = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0 ; str[len]; i++)
		len++;

	new_node->str = duplicate_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}

	return (*head);
}
