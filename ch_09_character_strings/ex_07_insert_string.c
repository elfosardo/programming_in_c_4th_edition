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
    int i = 0;
    int length_str1 = strLength(source);
    int length_str2 = strLength(insertthis);

    int new_length = length_str1 + length_str2;

    while ( i < (length_str2) ) {
        source[position + length_str2 + i] = source[position + i];
        source[position + i] = insertthis[i];
        ++i;
    }

    source[new_length] = '\0';
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
