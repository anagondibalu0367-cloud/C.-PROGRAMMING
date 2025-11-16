#include <stdio.h>

int main() {
    char ch = 'A';  // starting letter
    int i, j;

    // Outer loop for rows
    for (i = 1; i <= 4; i++) {
        // Inner loop for columns
        for (j = 1; j <= 10; j++) {
            printf("%c ", ch);
            ch++;  // move to next letter
        }
        printf("\n");  // new line after each row
    }

    return 0;
}

