#include "holberton.h"
#include <stdio.h>

/**
 * conjugate - returns the conjugate of a given complex number
 * @c: complex number to print
 * Return: conjugate
 */

complex conjugate(complex c)
{
	c.im = c.im * (-1);
	return (c);
}
