// Program to sum the digits of an integer.

#include <stdio.h>

int main (void)
{
	int last_digit, number, sum = 0;

	printf("Enter your number.\n");
	scanf("%i", &number);

	do {
		// last digit of the number, from left to right
		// is that number modulus 10
		// e.g. 123 / 10 = 12 leaving 3
		last_digit = number % 10;
		// sum is sum + last digit of the number
		sum = number % 10 + sum;
		// dividing the number by 10 as int will cut the
		// decimals and leave only the missing digits
		// of the number
		// e.g. 123 / 10 = 12
		number = number / 10;
	}
	while (number != 0);

	printf ("Sum of number digits is: %i\n", sum);

	return 0;
}
