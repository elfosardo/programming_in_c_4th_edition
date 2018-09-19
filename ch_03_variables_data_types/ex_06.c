#include <stdio.h>

int main (void)
{
	float x = 2.55;

	float my_pol = 3 * x * x * x - 5 * x * x + 6;

	printf("Result of the polynomial is: %f\n", my_pol);
}
