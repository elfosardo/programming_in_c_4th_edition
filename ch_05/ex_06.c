// display digits of an integer in english

#include <stdio.h>

int main (void)
{
    int number, reversed_number, digit;
    int number_of_digits;
    
    printf ("Type the number to convert in english:\n");
    scanf ("%i", &number);

    if ( number < 0 ) {
        number = -number;
        printf ("minus ");
    }

    do {
        reversed_number *= 10;
        reversed_number = reversed_number + number % 10;
        number /= 10;
        number_of_digits++;
    } while ( number != 0 );

    do {
        digit = reversed_number % 10;
        reversed_number /= 10;
        number_of_digits--;

        switch (digit) {
            case 0:
                printf ("zero ");
                break;
            case 1:
                printf ("one ");
                break;
            case 2:
                printf ("two ");
                break;
            case 3:
                printf ("three ");
                break;
            case 4:
                printf ("four ");
                break;
            case 5:
                printf ("five ");
                break;
            case 6:
                printf ("six ");
                break;
            case 7:
                printf ("seven ");
                break;
            case 8:
                printf ("eight ");
                break;
            case 9:
                printf ("nine ");
                break;
            default:
                break;
        }
    } while ( number_of_digits != 0 );

    printf ("\n");

    return 0;
}
