#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays the complex numbers
 * @c: complex number to print
 * Return: No return.
 */

void display_complex_number(complex c)
{
/* print real part */
	if (c.re != 0)
		printf("%g", c.re);

/* print sign */
	if (c.im > 0)
		printf(" + ");
	else if (c.im < 0)
	{
		printf(" - ");
		c.im = c.im * (-1);
	}

/* print imaginary */
	if (c.im != 1 && c.im != -1 && c.im != 0)
		printf("%gi", c.im);
	else if (c.im == 1 && c.im == -1)
		printf("i");

	printf("\n");
}
