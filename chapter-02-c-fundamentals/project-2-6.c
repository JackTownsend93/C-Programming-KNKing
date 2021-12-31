// Calculate value of a polynomial using Horner's rule.
#include <stdio.h>
#include <math.h>

int main(void) {
    // User input.
    float x;
    printf("Enter a value for x: ");
    scanf("%f",&x);

    // Evaluate and print the polynomial value using Horner's rule.
    float y = ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = ((((3x + 2)x - 5)x - 1)x + 7)x - 6 = %.2f\n", y);

    return 0;
}