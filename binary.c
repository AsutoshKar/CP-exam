//Let's convert decimal to binary in c
#include <stdio.h>
int main() {
    int num, binary = 0, remainder, base = 1;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    while (num > 0) {
        remainder = num % 2;
        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }
    printf("Binary representation: %d\n", binary);
    return 0;
}