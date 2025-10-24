//Let's convert binary to decimal in C
#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%d", &binary);
    if (binary == 0) {
        printf("Decimal equivalent: 0\n");
        return 0;
    }

    while (binary > 0) {
        rem = binary % 10;
        decimal = decimal + rem * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}