#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head)
	{
		free(head);
		head = head->next;
	}
}
