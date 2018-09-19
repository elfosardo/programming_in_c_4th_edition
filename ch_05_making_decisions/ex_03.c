// results of division to 3 decimal place accuracy

#include <stdio.h>

int main (void)
{
	int a, b;
	float result;

	printf ("enter the first number:\n");
	scanf ("%i", &a);
	printf ("enter the second number:\n");
	scanf ("%i", &b);

	if ( b == 0 )
		printf ("operation by 0 not possible\n");
	else {
		result = (float) a / b;
	        printf ("%i / %i = %.3f\n", a, b, result);
	}

	return 0;
}
