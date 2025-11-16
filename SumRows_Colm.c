#include <stdio.h>

int main() {
    int rows, cols;
    int i,j;

    // Step 1: Input size of the matrix
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    // Step 2: Input matrix elements
    printf("\nEnter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Display the matrix
    printf("\nThe Matrix is:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Step 4: Calculate sum of each row
    printf("\nSum of each row:\n");
    for ( i = 0; i < rows; i++) {
        int rowSum = 0;
        for ( j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d = %d\n", i + 1, rowSum);
    }

    // Step 5: Calculate sum of each column
    printf("\nSum of each column:\n");
    for ( j = 0; j < cols; j++) {
        int colSum = 0;
        for ( i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}

