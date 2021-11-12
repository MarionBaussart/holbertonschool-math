#ifndef HEADER_FILE
#define HEADER_FILE variadic_functions.h

/**
 * struct complex - structure of complex number
 *
 * @re: real part
 * @im: imaginary part
 */
typedef struct complex
{
	double re;
	double im;
} complex;

complex conjugate(complex c);

void display_complex_number(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);

#endif
