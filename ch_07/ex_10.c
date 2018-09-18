#include <stdio.h>

int prime (int x)
{
    int i;

    for ( i = 2; i <= x/2; ++i )
    {
        if ( x % i == 0 )
            return 0;
    }

    return 1;
}

int main (void)
{
    int x, result;

    printf("Enter a positive integer: ");
    scanf("%i",&x);

    result = prime(x);

    if ( result == 1 )
        printf ("%i is prime\n", x);
    else
        printf ("%i is not prime\n", x);

    return 0;
}







