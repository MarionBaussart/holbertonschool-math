#include "fibonacci.h"

/**
 * Fibonnaci - function that return the Fibonacci sequence
 * until having a geometric behavior
 * Return: singly linked list corresponding to the Fibonacci suite
 */

t_cell *Fibonnaci()
{
	t_cell *fibonacci_suite = NULL;
	int F1 = 1, F2 = 1, F, index = 0;

	fibonacci_suite = add_nodeint(&fibonacci_suite, F1);
	fibonacci_suite = add_nodeint(&fibonacci_suite, F2);

	while (index < 18)
	{
		F = F1 + F2;
		F1 = F2;
		F2 = F;
		fibonacci_suite = add_nodeint(&fibonacci_suite, F);
		index++;
	}

	return (fibonacci_suite);
}

/**
 * gold_number - function that give an approximation of the gold number
 * @head: t_cell given
 * Return: approximation of the golden number
 */

double gold_number(t_cell *head)
{
	double golden_number;

	golden_number = ((double)head->elt / (double)head->next->elt);

	return (golden_number);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: singly list to print
 * @n: new int to add to head
 * Return: address of the new element, or NULL if it failed
 */

t_cell *add_nodeint(t_cell **head, int n)
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
