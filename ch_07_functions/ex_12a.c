#include <stdio.h>

void transposeMatrix( int matrix[4][5], int newmatrix[5][4] )
{
    int i, j;

    for ( i = 0; i < 4 ; ++i )
        for ( j = 0; j < 5; ++j )
            newmatrix[j][i] = matrix[i][j];
}
        

int main (void)
{
    int matrix[4][5], newmatrix[5][4];
    int i, j, n = 0;

    for ( i = 0; i < 4; ++i )
        for ( j =0; j < 5; ++j ) {
            matrix[i][j] = n;
            n++;
        }

    printf("Matrix: \n");
    for ( i = 0; i < 4; ++i )
        for ( j =0; j < 5; ++j ) {
            printf("%3i ", matrix[i][j]);
            if ( j == 4 )
                printf("\n");
        }

    transposeMatrix( matrix, newmatrix );

    printf("\nTransposed Matrix:\n");
    for ( i = 0; i < 5; ++i )
        for ( j =0; j < 4; ++j ) {
            printf("%3i ", newmatrix[i][j]);
            if ( j == 3 )
                printf("\n");
        }

    return 0;
}
