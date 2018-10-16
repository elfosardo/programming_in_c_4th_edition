#include <stdio.h>

void exchange (int * const ptr1, int * const ptr2) {

    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void sort3 ( int *a, int *b, int *c) {

    if ( *a > *b ) {
        exchange( a, b );
    }

    if ( *b > *c ) {
        exchange( b, c );
    }

    if ( *a > *b ) {
        exchange( a, b );
    }
}

int main (void) {

    int a=13, b=4, c=9;

    printf("Original numbers: %i %i %i\n", a, b, c);

    sort3( &a, &b, &c);

    printf("Sorted numbers: %i %i %i\n", a, b, c);

    return 0;
}
