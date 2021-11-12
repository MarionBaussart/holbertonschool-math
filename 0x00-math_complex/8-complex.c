#include "holberton.h"
#include <stdio.h>
#include <math.h>

/**
 * complex_from_mod_arg -  update the real and the imaginar
 * parts of a complex number given its modulus and arguments
 * for gcc, include at the end -lm for the libraries
 * @m: modulo
 * @arg: argument
 * @c3: complex number
 * Return: No return
 */

void complex_from_mod_arg (double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
