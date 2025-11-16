#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check for numbers less than 2
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to n/2
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

