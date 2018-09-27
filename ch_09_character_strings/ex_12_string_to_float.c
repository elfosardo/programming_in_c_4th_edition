// Function to convert a string to an integer

#include <stdio.h>

int countDecimal (const char string[])
{
    int i, len = 0, dotposition = 0, decimal;

    while ( string[len] != '\0' )
        ++len;

    for  ( i = 0; i < len; ++i )
        if ( string[i] == '.' ) {
            dotposition = len - i;
            break;
        }
        else
            dotposition = len;

    decimal = len - dotposition;

    return decimal;
}

float strToFloat (const char string[])
{
    int  i, dotposition, len = 0;
    float floatValue, result = 0.0f;

    while ( string[len] != '\0' )
        ++len;

    if ( string[0] == '-' )
        i = 1;
    else
        i = 0;

    for  ( i; i < len; ++i ) {
        if ( string[i] == '.' )
            dotposition = len - i - 1;
        else {
            floatValue = string[i] - '0';
            result = result * 10.0f + floatValue;
        }
    }

    while ( dotposition-- )
        result /= 10.0f;

    if ( string[0] == '-' )
        result = -result;

    return result;
 }

int main (void)
{
    float strToFloat (const char  string[]);

    char stringToConvert1[] = "245.123";
    printf ("%.*f\n", countDecimal(stringToConvert1), strToFloat(stringToConvert1));

    char stringToConvert2[] = "100";
    printf ("%.*f\n", countDecimal(stringToConvert2), strToFloat(stringToConvert2) + 25);

    char stringToConvert3[] = "135";
    printf ("%.*f\n", countDecimal(stringToConvert3), strToFloat(stringToConvert3));

    char stringToConvert4[] = "-123";
    printf ("%.*f\n", countDecimal(stringToConvert4), strToFloat(stringToConvert4));

    char stringToConvert5[] = "-867.6921";
    printf ("%.*f\n", countDecimal(stringToConvert5), strToFloat(stringToConvert5));

    return 0;
}
