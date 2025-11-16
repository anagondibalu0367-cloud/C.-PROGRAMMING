#include <stdio.h>

int main() {
    int n, i;

    // Ask user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Even numbers from 0 to %d are:\n", n);

    // Loop to print even numbers
    for (i = 0; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

