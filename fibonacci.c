// Let's find a Fibonacci series in C
#include <stdio.h>

int main() {
    int n;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    else if (n == 1) {
        printf("0 1");
        return 0;
    }
    else{
        nextTerm = t1 + t2;
        printf("0 1");
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