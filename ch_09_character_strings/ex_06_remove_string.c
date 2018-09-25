#include <stdio.h>

// remove characters from a string

void removeString(char source[], int index, int remove) {
    int i;

    if ( source[index] == '\0' )
        return;

    for ( i = 0; i < index + remove; ++i )
        if ( source[i] == '\0' ) {
            source[index] = '\0';
            return;
        }

    do {
        source[i - remove] = source[i];
    } while ( source[i++] != '\0' );
}

int main(void) {
    void removeString(char source[], int index, int remove);
    
    char text1[] = "the wrong son";
    char text2[] = "the wrong son";
    char text3[] = "the wrong son";

    printf("Original text: %s\n", text1);
    removeString(text1, 4, 6);
    printf("New text: %s\n", text1);

    printf("Original text: %s\n", text2);
    removeString(text2, 0, 4);
    printf("New text: %s\n", text2);

    printf("Original text: %s\n", text3);
    removeString(text3, 13, 6);
    printf("New text: %s\n", text3);

    return 0;
}
