//Let's find the grade of a student using switch case
#include <stdio.h>
int main() {
    int n;

    printf("Enter your mark (0-100): ");
    scanf("%d", &n);

    switch (n/10) {
        case 9:
            printf("O!\n");
            break;
        case 8:
            printf("E!\n");
            break;
        case 7:
            printf("A!\n");
            break;
        case 6:
            printf("B!\n");
            break;
        case 5:
            printf("C!\n");
            break;
        default:
            printf("Invalid grade entered.\n");
            break;
    }

    return 0;
}