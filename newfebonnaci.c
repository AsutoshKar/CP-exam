#include <stdio.h>
int main(void) {
    int n;
    int t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number: ");
    scanf("%d", &n);
    do {
        printf(" %d: ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        if (t1 > n)
            break;

    }while(1);

    printf("\n");
    return 0;
}