#include <stdio.h>

// extract a portion of a character string
// inserts a null character at the end of the substring
// end the substring when it reaches the end of the source string

void substring( const char source[], int start, int count, char result[] ) {
    int i = start;
    int j = 0;
    int k = i + count;

    while (source[i] != '\0' && i < k) {
        result[j] = source[i];
        ++i;
        ++j;
    }

    result[j] = '\0';
}

int main(void) {
    void substring(const char source[], int start, int count, char result[]);
    char word[] = "this_is_a_test";
    char extract[] = "";

    printf("Test string: %s\n", word);
    
    substring(word, 2, 21, extract);

    printf("Extract 21 chars from 2: %s\n", extract);

    substring(word, 2, 3, extract);

    printf("Extract 3 chars from 2: %s\n", extract);

    return 0;
}
