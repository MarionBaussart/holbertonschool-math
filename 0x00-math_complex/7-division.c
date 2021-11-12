#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * division - division operation to complex numbers
 * for gcc, include at the end -lm for the libraries
 * @c1: first complex number
 * @c2: second complex number
 * @c3: div stored in c3
 * Return: No return
 */

void division(complex c1, complex c2, complex *c3)
{
	c3->re = ((c1.re * c2.re) + (c1.im * c2.im));
	c3->re /= (c2.re * c2.re + c2.im * -c2.im * -1);
	c3->im = -((c1.re * c2.im) - (c1.im * c2.re));
	c3->im /= (c2.re * c2.re + c2.im * -c2.im * -1);
}
