// calculate average of array with 10 floating point values

#include <stdio.h>

int main (void)
{
    float values[10] = { 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0 };
    float sum, average;
    int n;

    for ( n = 0 ; n < 10 ; ++n )
        sum += values[n];

    average = sum / 10;

    printf ("Average: %f\n", average);

    return 0;
}
