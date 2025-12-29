//take array elements inside function and display them (no structure)
#include <stdio.h>

void printStudent( int a) {
    printf("Marks: %d\n", a);

}

int main() {
    int mark[50];
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    printf("Enter marks of %d students:\n", n);
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d", &mark[i]);
    }

    for (i=0;i<n;i++)
    {
        printStudent(mark[i]);
    }
    return 0;
}
