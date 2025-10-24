//Let's write a code to find perfect number in C
#include <stdio.h>
int main() {
    int num, i, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum= sum+ i;
            printf("Divisor: %d\n", i);
        }
    }
    if (sum == num) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    return 0;
}