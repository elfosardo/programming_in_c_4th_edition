#include <stdio.h>

int main (void)
{
	int n, triangNumber;

	for (n = 5; n <= 50; n += 5) {
		triangNumber = n * (n + 1) / 2;
		printf("%3i        %i\n", n, triangNumber);
	}
}
