// Ask the user for a dollar amount and return the smallest number of $20, $10, $5, and $1 notes required
// to total that sum.
#include <stdio.h>

int main(void) {
    // User input.
    int dollar_sum;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollar_sum);

    // Determine smallest number of notes to make that sum.
    int num_20s, num_10s, num_05s, num_01s;
    num_20s = dollar_sum / 20;
    num_10s = dollar_sum % 20 / 10;
    num_05s = dollar_sum % 20 % 10 / 5;
    num_01s = dollar_sum % 20 % 10 % 5;


    // Print.
    printf("The smallest number of notes is:\n");
    printf("\t20 dollar notes: %d\n", num_20s);
    printf("\t10 dollar notes: %d\n", num_10s);
    printf("\t 5 dollar notes: %d\n", num_05s);
    printf("\t 1 dollar notes: %d\n", num_01s);
    printf("For a minimum total of %d notes.\n", num_20s + num_10s + num_05s + num_01s);

    return 0;
}