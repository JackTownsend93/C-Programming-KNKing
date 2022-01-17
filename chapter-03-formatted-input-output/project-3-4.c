// Write a programmer that prompts the user to enter a telephone number in the form:
// (xxx) xxx-xxxx
// And then displays the number in the form:
// xxx.xxx.xxxx

#include <stdio.h>

int main(void) {
    int country_code, three_digit, four_digit;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &country_code, &three_digit, &four_digit);

    printf("You entered: %03d.%03d.%04d\n", country_code, three_digit, four_digit);
}