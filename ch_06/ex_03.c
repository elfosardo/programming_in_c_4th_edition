#include <stdio.h>

int main (void)
{
     int ratingCounters[11], i, response;

     for ( i = 1;  i <= 10;  ++i )
          ratingCounters[i] = 0;

     printf ("Enter your responses\n");
     printf ("999 to exit\n");

     do {
          scanf ("%i", &response);

          if ( response == 999 )
              break;
          else if ( response < 1 || response > 10 )
              printf ("Bad response: %i\n", response);
          else
               ++ratingCounters[response];
     } while ( response != 999 );

     printf ("\n\nRating   Number of Responses\n");
     printf ("------ -------------------\n");

     for ( i = 1;  i <= 10;  ++i )
          printf ("%4i%14i\n", i, ratingCounters[i]);

     return 0;
}
