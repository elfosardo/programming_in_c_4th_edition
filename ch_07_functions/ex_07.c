#include <stdio.h>

long int x_to_the_n ( int x, int n )
{
    long int result;

    if ( n == 0 )
        result = 1;
    else
        result = x * x_to_the_n (x, n - 1);

    return result;
}

int main (void)
{
    int x, n;
    long int result;

    printf ("Number ot elevate: \n");
    scanf ("%i", &x);
    printf ("Power to elevate: \n");
    scanf ("%i", &n);
    
    result = x_to_the_n ( x, n );

    printf ("%i to the %i = %i\n", x, n, result);

    return 0;
}
