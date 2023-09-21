#include "lists.h"
/**
 * list_len -a function that returns the number of elements in a linked  list.
 * Return: the number of nodes
 * @h: pointer to linked list
 */
size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
