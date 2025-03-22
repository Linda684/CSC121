#include <stdio.h>

int main() {
    int initial_balance = 50000;   // Initial mobile money balance
    int withdrawal = 20000; // Amount to withdraw

    // Calculate the remaining balance
    int remaining_balance = initial_balance - withdrawal ;

    // Display the withdrawal amount
    printf("You have withdrawn UGX %d\n", withdrawal);


    // Display the remaining balance
    printf("Your remaining balance is UGX %d\n", remaining_balance);

    // Display a thank-you message
    printf("Thank you for using this service\n");
    return 0;
}