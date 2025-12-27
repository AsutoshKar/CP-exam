//Let's element wise add two arrays
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);
    
    int arr1[n], arr2[n], sum[n];
    
    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Element wise addition
    for(i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
    }
    
    printf("Sum of the two arrays is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");
    
    return 0;
}