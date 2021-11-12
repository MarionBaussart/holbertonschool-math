#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * modulus - returns the modulus of a given complex number
 * for gcc, include at the end -lm for the libraries
 * @c: complex number to print
 * Return: modulus
 */

double modulus(complex c)
{
	double mod = 0, exp = 2;

	mod = sqrt(pow(c.re, exp) + pow(c.im, exp));

	return (mod);
}
