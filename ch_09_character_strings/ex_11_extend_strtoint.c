// Function to convert a string to an integer

#include <stdio.h>

int  strToInt (const char  string[])
{
    int  i, intValue, result = 0;

    if ( string[0] == '-' )
        i = 1;
    else
        i = 0;

    for  ( i; string[i] >= '0' && string[i] <= '9'; ++i )
    {
        intValue = string[i] - '0';
        result = result * 10 + intValue;
    }

    if ( string[0] == '-' )
        result = -result;

    return result;
}

int main (void)
{
    int  strToInt (const char  string[]);

    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));
    printf ("%i\n", strToInt("-123"));

    return 0;
}
