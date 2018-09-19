#include <stdio.h>

int main (void)
{
     int  n, number, triangularNumber, counter, maxTriang;

     printf ("Enter number of triangular numbers you want to calculate: ");
     scanf  ("%i", &maxTriang);

     for ( counter = 1;  counter <= maxTriang;  ++counter ) {
          printf ("What triangular number do you want? ");
          scanf  ("%i", &number);

          triangularNumber = 0;

          for ( n = 1;  n <= number;  ++n )
               triangularNumber += n;

          printf ("Triangular number %i is %i\n\n", number, triangularNumber);
     }

     return 0;
}
