// Dictionary lookup program

#include <stdio.h>

// Function to compare two character strings

int compareStrings (const char *s1, const char *s2)
{
    int answer;

    while ( *s1 == *s2 && *s1 != '\0'&& *s2 != '\0' ) {
        ++s1;
        ++s2;
    }

    if ( *s1 < *s2 )
        answer = -1;
    else if ( *s1 == *s2 )
        answer = 0;
    else
        answer = 1;

    return answer;
}

int main (void)
{
    char *word1, *word2 = "test";
    int result;

    printf ("Enter word: ");
    scanf ("%14s", word1);

    result = compareStrings( word1, word2);

    if ( result == 0 )
        printf ("%s is the right word\n", word1);
    else
        printf ("Sorry, the word %s is not correct.\n", word1);

    return 0;
}
