#include <stdio.h>

int main() {
    int n, i;
    int sum =0;

    // Ask user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    // Use a loop to print natural numbers
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum=sum+i;
    }
    
    printf("\nTotal of Sum Number: %d",sum);
    return 0;
}

