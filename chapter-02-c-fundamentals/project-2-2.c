// Compute the volume of a sphere.
#include <stdio.h>
#include <math.h>

int main(void) {
    float r = 10.0f;
    // float V = 4/3*M_PI*r*r*r;
    float V = 4.0f/3.0f*M_PI*r*r*r;
    printf("The volume of a %.1fm radius sphere is %.1fm^3.\n", r, V);

    return 0;
}