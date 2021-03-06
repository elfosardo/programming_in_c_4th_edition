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



// determine if a character exists in a string
// finding a substring in a string

int findString(char mystring[], char findthis[]) {
    int i = 0;
    int j = 0;
    int k, v;

    while ( mystring[i] != '\0' ) {
        if ( mystring[i] == findthis[j] ) {
            k = i;
            v = j;
            while ( findthis[v] != '\0' ) {
                if ( findthis[v] == mystring[k] ) {
                    ++v;
                    ++k;
                }
                else
                    break;
                if ( findthis[v] == '\0' ) {
                    return i;
                }
            }
        }
        ++i;
    }

    return -1;
}

// replace a string with another string
// determine if a character exists in a string
// finding a substring in a string

void replaceString(char source[], char findthis[], char replace[]) {
    int index = findString(source, findthis);
    int length_findthis;

    if ( index != -1 ) {
        length_findthis = strLength(findthis);
        
        printf("%s\n", source);
        removeString(source, index, length_findthis);
        printf("%s\n", source);
        insertString(source, replace, index);
    }
}

int main(void) {
    char source[] = "this is 1";

    printf("Original text: %s\n", source);

    replaceString(source, " is", " one is");

    printf("New text: %s\n", source);

    return 0;
}
