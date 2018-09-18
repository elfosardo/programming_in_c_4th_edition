// Program to determine if a number is evenly divisible by another

#include <stdio.h>

int main (void)
{
	int a, b, remainder;

	printf ("Type the first number:\n");
	scanf ("%i", &a);
	printf ("Type the second number:\n");
        scanf ("%i", &b);

	remainder = a % b;

	if ( remainder == 0)
		printf ("%i is evenly divisible by %i\n", a, b);
	else
		printf ("numbers not compatible\n");

	return 0;
}
