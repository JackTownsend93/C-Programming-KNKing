// Write a programme that prompts the user to enter the numbers 1-16 (in any order)
// and then displays the numbers in a 4x4 arrangement, followed by the sums of the rows,
// columns, and diagonals.

#include <stdio.h>

int main(void) {
    int num01, num02, num03, num04, num05, num06, num07, num08, num09, num10;
    int num11, num12, num13, num14, num15, num16;
    int sum_row1, sum_row2, sum_row3, sum_row4;
    int sum_col1, sum_col2, sum_col3, sum_col4;

    printf("Enter the numbers 1-16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &num01, &num02, &num03, &num04, &num05, &num06, &num07, &num08, &num09, &num10, &num11, &num12, &num13, &num14, &num15, &num16);

    // Number square.
    printf("%d\t%d\t%d\t%d\n", num01, num02, num03, num04);
    printf("%d\t%d\t%d\t%d\n", num05, num06, num07, num08);
    printf("%d\t%d\t%d\t%d\n", num09, num10, num11, num12);
    printf("%d\t%d\t%d\t%d\n", num13, num14, num15, num16);

    // Sums.
    printf("Sum of rows: %d %d %d %d\n", num01+num02+num03+num04, num05+num06+num07+num08, num09+num10+num11+num12, num13+num14+num15+num16);
    printf("Sum of columns: %d %d %d %d\n", num01+num05+num09+num13, num02+num06+num10+num14, num03+num07+num11+num15, num04+num08+num12+num16);
    printf("Sum of diagonals: %d %d\n", num01+num06+num11+num16, num13+num10+num07+num04);

    return 0;
}