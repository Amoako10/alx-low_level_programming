#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the list.
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head || !*head)
		return (*head);
	prev = 0;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
