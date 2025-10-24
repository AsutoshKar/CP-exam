// Let's find a Fibonacci series in C
#include <stdio.h>

int main(void) {
    int n;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number: ");
    if (scanf("%d", &n) != 1) return 1;

    if (n == 0) {
        printf("Enter a positive integer.\n");
        return 0;
    }

    else if (n == 1) {
        printf("Fibonacci Series: %d\n", t1);
        return 0;
    }
    else{
        nextTerm = t1 + t2;
        printf("Fibonacci Series: %d, %d", t1, t2);
        do {
            
            printf(", %d", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
            if (nextTerm > n) 
                break;
        } while (1);
    }

    printf("\n");
    return 0;
}