#include "lists.h"
/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to a struct of type dlistint_t
 * @n: n value of new node
 * Return: address of new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);

}
