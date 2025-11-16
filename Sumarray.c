#include <stdio.h>

int main() {
    int n, i, sum = 0;
    int arr[100];  // array to hold up to 100 elements

    // Input: number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input: array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output: sum of elements
    printf("Sum of the array elements = %d\n", sum);

    return 0;
}

