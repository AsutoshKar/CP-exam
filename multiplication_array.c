//take input of two 2-d array and multiply them and store in another array and print the result
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], result[10][10];
    int r1, c1, r2, c2;
    int i, j, k;

    // Input for first matrix
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);
    if(c1 != r2) {
        printf("Error! column of first matrix must be equal to row of second.\n");
        return 1;
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < r2; i++) {
        for(j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    int s;
    // Multiplying matrices
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            s = 0;
            for(k = 0; k < c1; k++) {
                s = s + a[i][k] * b[k][j];
            }
            result[i][j] = s;
        }
    }

    // Displaying the result
    printf("Resultant Matrix:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}