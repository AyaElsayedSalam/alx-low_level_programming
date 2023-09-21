#include "lists.h"
/**
* print_list - a function that prints all the elements of a list_t list.
 * Return: the number of nodes
 * @h: pointer to linked list 
*/
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;
	while (h)
	{
	if (h->str == NULL)
		printf("%s\n","[0] (nil)");

	else
		printf("[%d] %s\n", h->len, h->str);

	count_nodes++;	
	h = h->next;
	}
	return (count_nodes);
}
