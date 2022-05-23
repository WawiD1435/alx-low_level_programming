#include "lists.h"

/**
 * sum_listint - sum of all data of list
 * @head: head of the list
 * Return: sum. 0 if list is empty
 */

int sum_listint(listint_t *head);
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
