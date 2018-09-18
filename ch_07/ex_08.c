#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

float  absoluteValue (float x)
{
    if ( x < 0 )
      x = -x;

    return x;
}

float  squareRoot (float x)
{
    const  float  epsilon = .00001;
    float  guess   = 1.0;
    float  absoluteValue (float  x);

    if ( x < 0 )
    {
        printf ("Negative argument to squareRoot.\n");
        return -1.0;
    }

    while  ( absoluteValue (guess * guess - x) >= epsilon )
           guess = ( x / guess + guess ) / 2.0;

    return guess;
}

float calcDiscriminant (float a, float b, float c)
{
    float discriminant = b * b - 4 * a * c;

    return discriminant;
}

int rootsAreImaginary (float discriminant)
{
    if ( discriminant < 0 ) {
        printf ("Roots are imaginary\n");
        exit(1);
    }
}

int main (void)
{
    float a, b, c, discriminant, x;
    bool areImaginaries;

    printf ("Enter the values for a, b and c: \n");
    scanf ("%f %f %f", &a, &b, &c);

    discriminant = calcDiscriminant (a, b, c);

    rootsAreImaginary (discriminant);

    x = -b + squareRoot (discriminant) / 2 * a;
    printf ("x1 = %f\n", x);
    x = -b - squareRoot (discriminant) / 2 * a;
    printf ("x2 = %f\n", x);
    
    return 0;
}
