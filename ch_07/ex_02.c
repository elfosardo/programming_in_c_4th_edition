// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
    int  i, triangularNumber = 0;

    for ( i = 1;  i <= n;  ++i )
        triangularNumber += i;

    return triangularNumber;
}

int main (void)
{
    int n, triang;

    n = 10;
    triang = calculateTriangularNumber (n);
    printf ("Triangular number %i is %i\n", n, triang);

    n = 20;
    triang = calculateTriangularNumber (n);
    printf ("Triangular number %i is %i\n", n, triang);

    n = 50;
    triang = calculateTriangularNumber (n);
    printf ("Triangular number %i is %i\n", n, triang);

    return 0;
}
