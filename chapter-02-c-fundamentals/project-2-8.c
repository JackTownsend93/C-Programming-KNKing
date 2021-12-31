// Calculate the remaining balance on a loan after the first, second, and third monthly payments.
#include <stdio.h>

int main(void) {
    // Prompt for user input.
    float loan_taken;
    printf("Enter amount of loan [$]: ");
    scanf("%f", &loan_taken);

    float interest_rate;
    printf("Enter the interest rate [%%]: ");
    scanf("%f", &interest_rate);

    float monthly_payment;
    printf("Enter monthly payment [$]: ");
    scanf("%f", &monthly_payment);

    // Calculate and return the balance after the first three monthly payments.
    float balance_1, balance_2, balance_3;
    balance_1 = loan_taken  + loan_taken*interest_rate/100.0f/12.0f - monthly_payment;
    balance_2 = balance_1  + balance_1*interest_rate/100.0f/12.0f - monthly_payment;
    balance_3 = balance_2  + balance_2*interest_rate/100.0f/12.0f - monthly_payment;

    printf("Balance remaining after payment 1: $%.2f\n", balance_1);
    printf("Balance remaining after payment 2: $%.2f\n", balance_2);
    printf("Balance remaining after payment 3: $%.2f\n", balance_3);

    return 0;
}