#include <stdio.h>

int arraySum( int digits[], int length)
{
    int i, arraysum = 0;

    for ( i = 0; i < length; ++i )
        arraysum = arraysum + digits[i];

    return arraysum;
}

int main (void)
{
    // example array
    int result;
    int digits[] = { 2, 3, 7 };

    result = arraySum ( digits, 3 );

    printf ("Sum is: %i\n", result);

    return 0;
}
