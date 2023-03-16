#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_node - inserts a node in a sorted linked list
 * @head: the beginning of the list
 * @number: the number to include in the linked list
 * Return: a pointer to the new added node or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = number;
	newnode->next = NULL;

	if (!(*head) || number <= (*head)->n)
	{
		newnode->next = *(head);
		return ((*head) = newnode);
	}
	while (*head)
	{
		if (!(*head)->next || (*head)->next->n > number)
		{
			newnode->next = (*head)->next;
			(*head)->next = newnode;
			return (newnode);
		}
		head = &(*head)->next;
	}
	return (NULL);
}
