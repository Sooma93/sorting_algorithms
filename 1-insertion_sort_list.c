#include "sort.h"

/**
 * swap - function to swap between to element
 * @n: the first node
 * @p: the next node
 * Return: 0
 */

void swap(listint_t *n, listint_t *p)
{
	if (n->prev)
		n->prev->next = p;
	if (p->next)
		p->next->prev = n;
	n->next = p->next;
	p->prev = n->prev;
	n->prev = p;
	p->next = n;
}

/**
 * insertion_sort_list - insertion sort code
 * @list: the head node
 * Return: 0
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *first, *second;

	if (!list || !*list || !(*list)->next)
		return;
	first = (*list)->next;
	while (first)
	{
		second = first;
		first = first->next;
		while (second && second->prev)
		{
			if (second->prev->n > second->n)
			{
				swap(second->prev, second);
				if (!second->prev)
					*list = second;
				print_list((const listint_t *)*list);
			}
			else
				second = second->prev;
		}
	}
}

