#include "holberton.h"
#include <stdio.h>

/**
 * display_complex_number - displays the complex numbers
 * @c: complex number to print
 * Return: No return.
 */

void display_complex_number(complex c)
{
	if (c.re != 0 || c.im != 0)
	{
		if (c.im == 1)
		{
			if (c.re != 0)
				printf("%.f + i\n", c.re);
			else
				printf("i\n");
		}
		else if (c.im == -1)
		{
			if (c.re != 0)
				printf("%.f - i\n", c.re);
			else
				printf("- i\n");
		}
		else if (c.im > 0)
		{
			if (c.re != 0)
				printf("%.f + %.fi\n", c.re, c.im);
			else
				printf("%.fi\n", c.im);
		}
		else if (c.im < 0)
		{
			if (c.re != 0)
				printf("%.f - %.fi\n", c.re, (-1) * c.im);
			else
				printf("- %.fi\n", (-1) * c.im);
		}
		else if (c.im == 0)
			printf("%.f\n", c.re);
	}
}
