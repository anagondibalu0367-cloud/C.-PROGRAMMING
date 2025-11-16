#include <stdio.h>

int main() {
    int rows, cols;
    int i,j;
    int sum =0,avg;

    // Get number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[2][2] ;// Declare a 2D array with max size 10x10

    // Input elements
    printf("Enter elements of the matrix:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display elements
    printf("\nThe 2D array (matrix) is:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
             sum +=arr[i][j];
        }
        printf("\n");
       
    }
     avg = sum/(rows*cols);
        printf("sum value is %d \n",sum);
        printf("average value is %d  \n",avg);

    return 0;
}

