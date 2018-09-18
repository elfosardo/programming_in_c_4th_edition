#include <stdio.h>

int main (void)
{
	float c_degree, f_degree = 27;

	c_degree = (f_degree - 32) / 1.8;

	printf ("%g degrees Fahrenheit = %g degrees Celsius\n", f_degree, c_degree );
}
