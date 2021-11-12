#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * argument - returns the argument of a given complex number
 * for gcc, include at the end -lm for the libraries
 * @c: complex number
 * Return: argument
 */

double argument(complex c)
{
	double arg;

	arg = atan(c.im / c.re);

	return (arg);
}
