// Ask user for two-digit number, then print the number with it's digits reversed.
#include<stdio.h>

int main() {
    // Ask user for number.
    int user_number;
    printf("Enter a two-digit number: ");
    scanf("%d", &user_number);

    // Determine first digit.
    int digit_1 = user_number / 10;
    int digit_2 = user_number % 10;

    // Print digits in reverse order.
    printf("The reverse digit order is: %d%d.", digit_2, digit_1);

    return 0;
}