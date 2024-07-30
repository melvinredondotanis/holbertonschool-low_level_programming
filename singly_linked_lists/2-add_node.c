/*
 * File: 2-add_node.c
 * Auth: Melvin Redondo--Tanis
 */

#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the head of the list
 * @str: string to be added to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);

	malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
