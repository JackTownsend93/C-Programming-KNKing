// Modify the addfrac.c programme of Section 3.2 so the the user enters both fractions
// at the same time, separated by a + sign.

#include <stdio.h>

int main(void) {
    int numerator1, numerator2, denominator1, denominator2;

    printf("Enter two fractions separated by a + sign [5/6+3/4]: ");
    scanf("%d/%d+%d/%d", &numerator1, &denominator1, &numerator2, &denominator2);

    printf("The sum is %d/%d", numerator1*denominator2+numerator2*denominator1, denominator1*denominator2);

    return 0;
}