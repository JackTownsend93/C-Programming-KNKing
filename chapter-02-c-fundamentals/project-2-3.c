// Compute the volume of a sphere with user-prompted input.
#include <stdio.h>
#include <math.h>

int main(void) {
    // User input.
    float r;
    printf("Enter the radius of the sphere [m]: ");
    scanf("%f",&r);

    // Calculate and print volume.
    float V = 4.0f/3.0f*M_PI*r*r*r;
    printf("The volume of a %.1fm radius sphere is %.1fm^3.\n", r, V);

    return 0;
}