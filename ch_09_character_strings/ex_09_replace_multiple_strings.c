#include <stdio.h>
#include <stdbool.h>

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

bool replaceString(char source[], char findthis[], char replace[]) {
    int index = findString(source, findthis);
    int length_findthis;

    if ( index != -1 ) {
        length_findthis = strLength(findthis);

        removeString(source, index, length_findthis);

        insertString(source, replace, index);

        return true;
    }
    else
        return false;
}

int main(void) {
    bool stillFound;

    char source1[] = "this is 1";
    char source2[] = "this is 1";
    char source3[] = "this is 1";

    printf("Original text: %s\n", source1);
    replaceString(source1, "1", "one");
    printf("New text: %s\n\n", source1);

    printf("Original text: %s\n", source2);
    do {
        stillFound = replaceString(source2, " ", "");
    } while ( stillFound );

    printf("Remove blank spaces: %s\n\n", source2);

    printf("Original text: %s\n", source3);
    do {
        stillFound = replaceString(source3, "i", "a");
    } while ( stillFound );

    printf("Convert i to a: %s\n", source3);

    return 0;
}
