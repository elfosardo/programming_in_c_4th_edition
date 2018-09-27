// convert lowercase to uppercase in a string

#include <stdio.h>

void uppercase (char string[])
{
    int i = 0;

    while ( string[i] != '\0' ) {
        if ( string[i] >= 'a' && string[i] <= 'z' )
            string[i] = string[i] - 'a' + 'A';
        i++;
    }

}

int main (void)
{
    char test_string[] = "UpperCase Conversion";

    printf("%s\n", test_string);

    uppercase(test_string);

    printf("%s\n", test_string);

    return 0;
}
