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

void display_complex_number(complex c);

#endif
