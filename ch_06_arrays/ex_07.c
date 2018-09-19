// Program to generate prime numbers up to n
// using the Sieve of Erathosthenes algorithm

#include <stdio.h>
#include <stdbool.h>

int main (void)
{
     int i, j, n;
     bool isPrime;

     n = 150;

     int values[n];

     values[0] = 0;
     values[1] = 0;
     values[2] = 0;

     for ( i = 2; i < n; ++i) {
         isPrime = false;
         if ( values[i] == 0 )
             isPrime = true;
         for ( j = 1 ; i * j <= n ; ++j )
             values[i * j] = 1;
         if ( isPrime )
             printf ("%i\n", i);
     }

     return 0;
}
