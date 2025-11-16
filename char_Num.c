#include <stdio.h>

int main() {
    int n, i;

    // Ask user for number of elements
    printf("Enter the number of characters: ");
    scanf("%d", &n);

    char arr[n];   // Character array
    int num[n];    // Integer array to store converted numbers

    // Take character input
    printf("Enter %d characters (digits only 0–9):\n", n);
    for(i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); // note the space before %c to ignore whitespace
    }

    // Convert and display
    printf("\nCharacters and their numeric values:\n");
    for(i = 0; i < n; i++) {
        num[i] = arr[i] ;  // convert char to integer
        printf("a[%d] = '%c' ? %d\n", i, arr[i], num[i]);
    }

    return 0;
}

