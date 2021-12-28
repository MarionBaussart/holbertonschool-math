#include "heron.h"

/**
 * heron - function that return the Heron sequence until having
 * convergence with an error less or equal to 10^-7
 * @p: number whose square root we want to approximate
 * @x0: first term of the suite
 * Return: singly linked list corresponding to the heron suite
 */

t_cell *heron(double p, double x0)
{
	t_cell *heron_suite = NULL;
	double u;

	heron_suite = add_nodeint(&heron_suite, x0);
	u = 0.5 * (x0 + (p / x0));
	while (fabs(u - x0) >= pow(10, -7))
	{
		heron_suite = add_nodeint(&heron_suite, u);
		x0 = u;
		u = 0.5 * (u + (p / u));
	}
	return (heron_suite);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: singly list to print
 * @n: new double to add to head
 * Return: address of the new element, or NULL if it failed
 */

t_cell *add_nodeint(t_cell **head, double n)
{
	t_cell *new, *first;

	new = malloc(sizeof(t_cell));
	if (new == NULL)
	{
		return (NULL);
	}

	new->elt = n;

	if (*head == NULL)
		*head = new;
	else
	{
		first = *head;
		*head = new;
		new->next = first;
	}

	return (new);
}
