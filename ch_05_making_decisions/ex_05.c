// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
     int  number, right_digit;
     char sign;

     printf ("Enter your number.\n");
     scanf ("%i", &number);

     if ( number < 0 )
     {
         number = -number;
         sign = '-';
     }


     while ( number != 0 ) {
          right_digit = number % 10;
          printf ("%i", right_digit);
          number = number / 10;
     }

     printf ("%c", sign);

     printf ("\n");

     return 0;
}
