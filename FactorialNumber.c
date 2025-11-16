#include <stdio.h>

int main() {
    int n, i = 1;
    unsigned long long factorial = 1;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for negative numbers
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using while loop
        while (i <= n) {
            factorial = factorial * i;
            i++;
        }
        printf("Factorial of %d is: %llu\n", n, factorial);
    }

    return 0;
}

