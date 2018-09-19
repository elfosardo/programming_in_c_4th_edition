#include <stdlib.h>
#include <stdio.h>

int gcd (int u, int v)
{
    int temp;

    while ( v != 0 ) {
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}

int lcm (int u, int v)
{
    int lcm = u * v / gcd (u, v);

    return lcm;
}

int main (void)
{
    int result, u, v;

    printf ("Enter 2 positive integers to know their lcm:\n");
    scanf ("%i %i", &u, &v);

    if ( u <= 0 || v <= 0 ) {
        printf ("Please enter only positive integers\n");
        exit(1);
    }

    result = lcm (u, v);
    printf ("least common multiple between %i and %i is: %i\n", u, v, result);

    return 0;
}



