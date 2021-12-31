// Prompt user for pounds and pence amount, then display a +5% tax amount.
#include <stdio.h>

int main(void) {
    // Prompt user.
    float amount;
    printf("Enter a pounds and pence amount [e.g. 5.32]: ");
    scanf("%f", &amount);

    // Apply tax.
    float tax_rate = 1.05f;
    float amount_with_tax = amount * tax_rate;
    char pound = 156; // £ sign (163 in gcc compiler).
    printf("With a %f%% tax added: %c%.2f.\n", tax_rate, pound, amount_with_tax);

    return 0;
}