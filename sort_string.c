//Sort string in alphabetical order
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    n = strlen(str);

    // Sorting the string in alphabetical order
    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("Sorted String: %s\n", str);

    return 0;
}