#include <stdio.h>

int main() {
    int rows = 3, cols = 3;   // Fixed size 3x3 matrix
    int matrix[3][3];
	int i,j;         // Declare 2D array

    // Taking input from the user
    printf("Enter elements of the 3x3 matrix:\n");

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the 2D array
    printf("\nThe 2D array (matrix) is:\n");

    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

