// Calculate value of a polynomial.
#include <stdio.h>
#include <math.h>

int main(void) {
    // User input.
    float x;
    printf("Enter a value for x: ");
    scanf("%f",&x);

    // Evaluate and print the polynomial value.
    float y = 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) +7*x -6;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 = %.2f\n", y);

    return 0;
}