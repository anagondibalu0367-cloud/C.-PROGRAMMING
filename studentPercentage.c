#include <stdio.h>

int main() {
    float percentage;

    // Ask user to enter percentage
    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    // Check grade based on percentage
    if (percentage >= 90) {
        printf("Grade: A\n");
    } 
    else if (percentage >= 80) {
        printf("Grade: B\n");
    } 
    else if (percentage >= 70) {
        printf("Grade: C\n");
    } 
    else if (percentage >= 60) {
        printf("Grade: D\n");
    } 
    else if (percentage >= 50) {
        printf("Grade: E\n");
    } 
    else {
        printf("Grade: F (Fail)\n");
    }

    return 0;
}

