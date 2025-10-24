//Let's convert polar coordinates to rectangular coordinates in C
#include <stdio.h>
#include <math.h>
int main() {
    float r, theta, x, y;

    printf("Enter polar coordinates (r and theta in degrees): ");
    if (scanf("%f %f", &r, &theta) != 2) return 1;

    // Use a local constant for pi instead of M_PI
    float PI = 3.14;
    float theta_rad = theta * (PI / 180.0);

    x = r * cosf(theta_rad);
    y = r * sinf(theta_rad);

    printf("Rectangular coordinates: x = %.2f, y = %.2f\n", x, y);
    return 0;
}