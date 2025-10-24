//Let's convert reactangular coordinates to polar coordinates
#include <stdio.h>
#include <math.h>
int main() {
    float x, y, r, theta;
    
    printf("Enter rectangular coordinates (x and y): ");
    if (scanf("%f %f", &x, &y) != 2) return 1;

    r = sqrt(x * x + y * y);
    theta = atanf(y / x) * (180.0 / 3.14); // Convert to degrees

    printf("Polar coordinates: r = %.2f, theta = %.2f degrees\n", r, theta);
    return 0;
}