/*
 * File: 1-list_len.c
 * Auth: Melvin Redondo--Tanis
 */

#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (h->str != NULL)
			len++;
		h = h->next;
	}
	return (len);
}
