// convert an integer to string

#include <stdio.h>
#include <stdbool.h>

void intToStr (int number, char string[])
{
    int i = 0, rem, len = 0, n;
    bool negative = false;

    n = number;

    while ( n != 0 )
    {
        len++;
        n /= 10;
    }

    if ( number < 0 ) {
        negative = true;
        number *= -1;
        len++;
    }

    for ( i; i < len; i++ )
    {
        rem = number % 10;
        number = number / 10;
        string[len - ( i + 1 )] = rem + '0';
    }

    if ( negative )
        string[0] = '-';

    string[len] = '\0';
}

int main (void)
{
    int test_number1 = 44;
    char string1[] = "";
    intToStr(test_number1, string1);
    printf("%s\n", string1);

    int test_number2 = -321;
    char string2[] = "";
    intToStr(test_number2, string2);
    printf("%s\n", string2);

    int test_number3 = 1000;
    char string3[] = "";
    intToStr(test_number3, string3);
    printf("%s\n", string3);

    return 0;
}
