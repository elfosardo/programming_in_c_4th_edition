#include <stdio.h>

// length of a string

int strLength(char anystring[]) {
    int i = 0;
 
    while ( anystring[i] != '\0' ) {
        ++i;
    }

    return i;
}

// insert string in another string

void insertString(char source[], char insertthis[], int position) {
    int j, length_insert, length_source;

    length_source = strLength(source);
    length_insert = strLength(insertthis);

    if ( position > length_source )
        return;

    for ( j = length_source; j >= position; --j )
        source[length_insert + j] = source[j];

    for ( j = 0; j < length_insert; ++j )
        source[j + position] = insertthis[j];
}

int main(void) {
    void insertString(char source[], char insertthis[], int position);
    char text[] = "the wrong son";
    char insertthis[] = "magic";

    printf("Original text: %s\n", text);
    insertString(text, insertthis, 10);
    printf("New text: %s\n", text);

    return 0;
}
