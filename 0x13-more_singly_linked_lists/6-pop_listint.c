#include "lists.h"

/**
 * pop_listint - delete the head node of a list
 * @head: head of node
 * Return: head node's data. 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	int node_data;

	listint_t *new;

	if (*head == NULL)
		return (0);
	node_data = (*head)->n;
	new = *head;
	*head = (*head)->next;

	free(new);
	return (node_data);
}
