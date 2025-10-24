#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float d = b * b - 4.0 * a * c;
    if (d < 0) {
        printf("No real roots.");
    } else if (d == 0) {
        printf("One real root: x = %f\n", -b / (2.0 * a));
    } else {
        float s = sqrt(d);
        printf("Two real roots: x1 = %f, x2 = %f\n",
               (-b + s) / (2.0 * a), (-b - s) / (2.0 * a));
    }

    return 0;
}