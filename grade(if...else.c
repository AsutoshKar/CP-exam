// Let's find the grade of a student in C using if...else
#include <stdio.h>
int main() {
    int marks;
    printf("Enter the marks obtained by the student: ");
    scanf("%d", &marks);
    if (marks >= 90) {
        printf("Grade: O\n");
    } else if (marks >= 80) {
        printf("Grade: E\n");
    } else if (marks >= 70) {
        printf("Grade: A\n");
    } else if (marks >= 60) {
        printf("Grade: B\n");
    } else {
        printf("Grade: C\n");
    }
    return 0;
}