#include "lists.h"

/**
 * check_cycle - checks whether a singly linked list has a
 *  cycle in it or not.
 * @list: the list to be checked
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	const listint_t *current;
	listint_t *test;

	if (list == NULL)
		return (0);
	current = list;
	test = list->next;
	while (current != NULL && test != NULL)
	{
		if (current == test)
			return (1);
		current = current->next;
		if (test->next == NULL)
			return (0);
		test = test->next->next;
	}

	return (0);
}
