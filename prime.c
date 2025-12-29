//Let's write a code to find prime number in c
#include <stdio.h>
int main() {
    int num, i;
    printf("Enter a positive integer: ");
    scanf("%d", &num);


    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
                break;   // Found a divisor, not prime
        
        }
    }

    if (i==num) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}
