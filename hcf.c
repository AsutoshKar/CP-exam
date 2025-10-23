//Let's find HCF of two numbers in C
#include <stdio.h>
int main() {
    int num1, num2, hcf, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    // Find the HCF
    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is %d.\n", num1, num2, hcf);
    return 0;
}