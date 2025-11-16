#include <stdio.h>

int main() {
    int i = 100;

    printf("Numbers from 1 to 10:\n");

    // Using do-while loop
    do {
        printf("%d\n", i);
        i++;  // increment i by 1
    } while (i <= 10);

    return 0;
}

