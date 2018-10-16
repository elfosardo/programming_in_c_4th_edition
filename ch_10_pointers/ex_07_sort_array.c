// array sort function using pointers

#include <stdio.h>

void sort (int *arrayPtr, const int n, const int order)
{
    int i, j, temp;
    
    if ( order == 1 ) {
        for ( i = 0; i < n; i++ ) {
            for ( j = 0; j < n; j++ ) {
                if ( *(arrayPtr + i) > *(arrayPtr + j) ) {
                    temp = *(arrayPtr + i);
                    *(arrayPtr + i) = *(arrayPtr + j);
                    *(arrayPtr + j) = temp;
                }
            }
        }
    }
    else {
        for ( i = 0; i < n; i++ ) {
            for ( j = 0; j < n; j++ ) {
                if ( *(arrayPtr + i) < *(arrayPtr + j) ) {
                    temp = *(arrayPtr + i);
                    *(arrayPtr + i) = *(arrayPtr + j);
                    *(arrayPtr + j) = temp;
                }
            }
        }
    }
}

int main (void)
{

    int  i;
    int  array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
                       44, -3, -9, 12, 17, 22, 6, 11 };

    printf("The array before the sort:\n");

    for ( i = 0;  i < 16;  ++i )
        printf("%i ", array[i]);

    printf("\n");

    printf("The array in descending order:\n");

    sort(array, 16, 1);

    for ( i = 0;  i < 16;  ++i )
        printf("%i ", array[i]);

    printf("\n");

    printf("The array in ascending order:\n");

    sort(array, 16, 0);

    for ( i = 0;  i < 16;  ++i )
        printf("%i ", array[i]);

    printf("\n");

    return 0;
}
