//Check wheather the traingle is valid and iscosceles, scalene, equilateral or right-angled
#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Check whether the triangle is valid */
    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid\n");

        /* Check Equilateral */
        if (a == b && b == c) {
            printf("Triangle is Equilateral\n");
        }
        /* Check Isosceles */
        else if (a == b || b == c || a == c) {
            printf("Triangle is Isosceles\n");
        }
        /* Check Scalene */
        else {
            printf("Triangle is Scalene\n");
        }

        /* Check Right-angled */
        if (a*a + b*b == c*c ||
            a*a + c*c == b*b ||
            b*b + c*c == a*a) {
            printf("Triangle is Right-angled\n");
        }
    }
    else {
        printf("Triangle is not valid\n");
    }

    return 0;
}
