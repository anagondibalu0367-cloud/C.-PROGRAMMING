#include <stdio.h>

int main() {
    int units;
    float amount, total_amount;

    // Ask user to enter number of units consumed
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Calculate bill according to the units
    if (units <= 100) {
        amount = units * 1.5;       // 1.5 per unit for first 100 units
    } 
    else if (units <= 200) {
        amount = 100 * 1.5 + (units - 100) * 2.5;   // 2.5 per unit for next 100 units
    } 
    else if (units <= 300) {
        amount = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0; // 4 per unit for next 100 units
    } 
    else {
        amount = 100 * 1.5 + 100 * 2.5 + 100 * 4.0 + (units - 300) * 5.0; // 5 per unit above 300
    }

    // Add fixed charge
    total_amount = amount + 50;  // 50 fixed charge

    // Display the bill
    printf("\n------ Electricity Bill ------\n");
    printf("Units Consumed : %d\n", units);
    printf("Amount         : %.2f\n", amount);
    printf("Fixed Charge   : 50.00\n");
     printf("------------------------------\n");
    printf("Total Bill     : %.2f\n", total_amount);
   

    return 0;
}

