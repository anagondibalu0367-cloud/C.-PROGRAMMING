#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0, oddSum = 0;

    // Ask user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop from 0 to n
    for (i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;  // Add to even sum
        } else {
            oddSum += i;   // Add to odd sum
        }
    }

    // Display the results
    printf("Sum of even numbers from 0 to %d: %d\n", n, evenSum);
    printf("Sum of odd numbers from 0 to %d: %d\n", n, oddSum);

    return 0;
}

