#include <stdio.h>

int main (void)
{
	int i, n;
	unsigned long long int nFactorial = 1;
	
	for (n = 1; n <= 10; ++n) {
		for (i = 1; i <= n ; ++i) {
			nFactorial *= i;
		}
		printf("%2i factorial = %llu\n", n, nFactorial);
	}

	return 0;
}
