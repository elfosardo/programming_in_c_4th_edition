#include <stdio.h>

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
                    printf("String found\n");
                    return i;
                }
            }
        }
        ++i;
    }

    printf("String not found\n");
    return -1;
}

int main(void) {
    int findString(char mystring[], char findthis[]);
    int index;

    char mystring[] = "a chatterbox";
    char findthis1[] = "hat";
    printf("Searching %s in %s\n", findthis1, mystring);
    index = findString(mystring, findthis1);
    printf("String index: %i\n", index);

    char findthis2[] = "box";
    printf("Searching %s in %s\n", findthis2, mystring);
    index = findString(mystring, findthis2);
    printf("String index: %i\n", index);

    char findthis3[] = "hase";
    printf("Searching %s in %s\n", findthis3, mystring);
    index = findString(mystring, findthis3);
    printf("String index: %i\n", index);

    return 0;
}
