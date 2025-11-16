#include <stdio.h>

int main() {
    int x = 9;
    int y = 2;
    float result1;
    double i=100.2;
    double j = 15.5;
    
    int result2;

    // Implicit type conversion
    result1 = x / y;  // both are int, result will be converted to float after division
    printf("Implicit type conversion:\n");
    printf("x / y = %.2f (integer division result converted to float)\n", result1);

    // Explicit type conversion (type casting)
    result2 = (int)i + j;  
    printf("\nExplicit type conversion:\n");
    printf("(int)i + J  = %d (Double value addition)\n", result2);

    return 0;
}

