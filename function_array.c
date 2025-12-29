//take array inside function and display them (no structure)
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int marks[50];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
    }

    printf("Marks entered are: ");
    printArray(marks, n);

    return 0;
}
