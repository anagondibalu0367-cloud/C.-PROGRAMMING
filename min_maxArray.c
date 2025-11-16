#include <stdio.h>

int main() {
    int n,i;
    
    // Ask user for number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Take input from user
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Initialize max and min with the first element
    int max = arr[0];
    int min = arr[0];
    
    // Loop to find max and min
    for(i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    
    // Display results
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    
    return 0;
}

