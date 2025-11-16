#include <stdio.h>

int main() {
    // Define a 2D array with 3 rows and 3 columns
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int i,j;

    // Print the 2D array
    printf("The 2D array (matrix) is:\n");

    for (i = 0; i < 3; i++) {          // Loop through rows
        for ( j = 0; j < 3; j++) {      // Loop through columns
            printf("%d\t", matrix[i][j]);  // Print each element
        }
        printf("\n");                      // New line after each row
    }

    return 0;
}

