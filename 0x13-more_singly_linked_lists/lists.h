#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <sdlib.h>
#include <string.h>

/**
 * struct listint_s singly listed link
 * @n: integer
 * @next: next node
 *
 * Description: singly linked list structure node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
