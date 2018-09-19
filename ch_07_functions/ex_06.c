#include <stdio.h>

// Function to calculate the absolute value of a number

double absoluteValue (double x)
{
     if ( x < 0 )
         x = -x;
     return (x);
}

/* Function to compute the square root of a number.
   If a negative argument is passed, then a message
   is displayed and -1.0 is returned.                */

double squareRoot (double x)
{
    const double epsilon = .00001;
    double guess = 1.0;
    double absoluteValue (double x);

    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        return -1.0;
    }

    while  ( absoluteValue (guess * guess - x) >= epsilon )
           guess = ( x / guess + guess ) / 2.0;

    return guess;
}

int main (void)
{
     printf ("squareRoot (2.0) = %.9f\n", squareRoot (2.0));
     printf ("squareRoot (144.0) = %.9f\n", squareRoot (144.0));
     printf ("squareRoot (17.5) = %.9f\n", squareRoot (17.5));

     return 0;
}
