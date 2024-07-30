#include "lists.h"

int _strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	char *dup;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	len = _strlen(str);
	new->str = dup;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		
	}
	return (*head);
}