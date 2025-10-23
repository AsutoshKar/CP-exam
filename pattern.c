#include <stdio.h>

int main(void) {
    int i, j, k;

    /* 1)
       1 2 3 4 5
       1 2 3 4
       1 2 3
       1 2
       1
    */
    for (i = 5; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 2)
       A
       A B
       A B C
       A B C D
       A B C D E
       A B C D E F
    */
    for (i = 1; i <= 6; ++i) {
        for (j = 0; j < i; ++j) {
            printf("%c", 'A' + j);
            if (j < i - 1) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 3)
       1
       1 2 3
       1 2 3 4 5
       1 2 3 4 5 6 7
    */
    for (k = 1; k <= 7; k=k+ 2) {
        for (j = 1; j <= k; ++j) {
            printf("%d", j);
            if (j < k) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 4)
       1
       0 0
       1 1 1
       0 0 0 0
       1 1 1 1 1
    */
    for (i = 1; i <= 5; ++i) {
        int val = (i % 2) ? 1 : 0;
        for (j = 0; j < i; ++j) {
            printf("%d", val);
            if (j < i - 1) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 5)
       1
       1 2 1
       1 2 3 2 1
    */
    for (i = 1; i <= 3; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
            if (j < i) printf(" ");
        }
        for (j = i - 1; j >= 1; --j) {
            if (i > 0 || j < i) printf(" ");
            printf("%d", j);
        }
        printf("\n");
    }
    printf("\n");

    /* 6)
       * * * * *
       * * *
       *
    */
    for (k = 5; k >= 1; k= k- 2) {
        for (j = 0; j < k; ++j) {
            printf("*");
            if (j < k - 1) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 7) (pattern 34)
       *
       * *
       * * *
       * * * *
    */
    for (i = 1; i <= 4; ++i) {
        for (j = 0; j < i; ++j) {
            printf("*");
            if (j < i - 1) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 8) 
             *
           * *
         * * *
       * * * *
    */
    for (i = 1; i <= 4; ++i) {
        for (j = 0; j < 4 - i; ++j) {
            printf(" ");
        }
        for (j = 0; j < i; ++j) {
            printf("*");
            if (j < i - 1) printf(" ");
        }
        printf("\n");
    }
    for (i = 1; i <= 4; ++i) {
        for (j = 0; j < i; ++j) {
            printf("*");
            if (j < i - 1) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 9)
             1
           1 2
         1 2 3
       1 2 3 4
    */
    for (i = 1; i <= 4; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
            if (j < i) printf(" ");
        }
        printf("\n");
    }
    printf("\n");

    /* 10)
             1
           1 2 1
         1 2 3 2 1
       1 2 3 4 3 2 1
    */
    for (i = 1; i <= 4; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
            if (j < i) printf(" ");
        }
        for (j = i - 1; j >= 1; --j) {
            printf(" %d", j);
        }
        printf("\n");
    }
    printf("\n");

    /* 11)
             *
           * * *
         * * * * *
       * * * * * * *
    */
    for (k = 1; k <= 7; k=k+ 2) {
        for (j = 0; j < k; ++j) {
            printf("*");
            if (j < k - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
