#include <stdio.h>

void transposeMatrix( int rows, int columns, int matrix[][columns], int newmatrix[][rows] )
{
    int i, j;

    for ( i = 0; i < rows ; ++i )
        for ( j = 0; j < columns; ++j )
            newmatrix[j][i] = matrix[i][j];
}
        

int main (void)
{
    int rows, columns;
    int i, j, n = 0;

    rows = 4;
    columns = 5;

    int matrix[rows][columns], newmatrix[columns][rows];

    for ( i = 0; i < rows; ++i )
        for ( j =0; j < columns; ++j ) {
            matrix[i][j] = n;
            n++;
        }

    printf("Matrix: \n");
    for ( i = 0; i < rows; ++i )
        for ( j =0; j < columns; ++j ) {
            printf("%3i ", matrix[i][j]);
            if ( j == columns - 1 )
                printf("\n");
        }

    transposeMatrix( rows, columns, matrix, newmatrix );

    printf("\nTransposed Matrix:\n");
    for ( i = 0; i < columns; ++i )
        for ( j =0; j < rows; ++j ) {
            printf("%3i ", newmatrix[i][j]);
            if ( j == rows - 1 )
                printf("\n");
        }

    return 0;
}
