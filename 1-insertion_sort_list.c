#include "sort.h"

/**
 * nodes_swap - Swap two nodes in a listint_t doubly-linked list.
 *
 * @n1: pointer to the first node.
 * @n2: pointer to the second node.
 */

void nodes_swap(listint_t *n1, listint_t *n2)
{
	if (n1->prev)
		n1->prev->next = b;
	if (n2->next)
		n2->next->prev = n1;
	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;
}

/**
 * insertion_sort_list - function that sorts a doubly linked list
 *		of integers in ascending order.
 *
 * @list: pointer to the head of a doubly-linked list.
 */

void insertion_sort_list(listint_t **list);
{
	listint_t *i, *j, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (i = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		j = i->prev;
		while (j != NULL && i->n < j->n)
		{
			nodes_swap(list, &j, i);
			print_list((const listint_t *)*list);
		}
	}
}
