#include <stdio.h>

int main() {
    char ch;

    // Ask user to enter a character
    printf("Enter any character: ");
    scanf("%c", &ch);

    // Check the type of character
    if (ch >= 'A' && ch <= 'Z') {
        printf("'%c' is an uppercase letter.\n", ch);
    } 
    else if (ch >= 'a' && ch <= 'z') {
        printf("'%c' is a lowercase letter.\n", ch);
    } 
    else {
        printf("'%c' is not an alphabet.\n", ch);
    }

    return 0;
}

