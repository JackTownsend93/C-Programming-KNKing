// Ask user for two- or three-digit number, then print the number with it's digits reversed.
#include<stdio.h>
#include<math.h>

int main() {
    // Ask user for number.
    int user_number;
    printf("Enter a two- or three-digit number: ");
    scanf("%d", &user_number);

    // Determine the number of digits.
    double user_number_length = floor(log10(user_number)) + 1;

    // Two digits.
    if (user_number_length == 2) {
        int digit_1 = user_number / 10;
        int digit_2 = user_number % 10;
        // Print digits in reverse order.
        printf("The reverse digit order is: %d%d.", digit_2, digit_1);
    }

    // Three digits.
    if (user_number_length == 3) {
        int digit_1 = user_number / 100;
        int digit_2 = user_number /10 % 10;
        int digit_3 = user_number % 10;
        // Print digits in reverse order.
        printf("The reverse digit order is: %d%d%d.", digit_3, digit_2, digit_1);
    }

    return 0;
}