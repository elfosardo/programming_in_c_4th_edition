// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (void)
{
     int fibonacci_old1, fibonacci_old2, fibonacci_new, i;

     fibonacci_old1 = 0;    // by definition
     fibonacci_old2 = 1;    // ditto

     printf ("%i\n", fibonacci_old1);
     printf ("%i\n", fibonacci_old2);

     for ( i = 2;  i < 15;  ++i ) {
          fibonacci_new = fibonacci_old1 + fibonacci_old2;
          fibonacci_old1 = fibonacci_old2;
          fibonacci_old2 = fibonacci_new;
          printf ("%i\n", fibonacci_new);
     }

     return 0;
}
