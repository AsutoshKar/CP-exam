//Concatenate two strings (Without using built-in functions)
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], result[200];
    int i, j;

    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();  // Consume newline character
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    // Concatenating strings
    for(i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    for(j = 0; str2[j] != '\0'; j++, i++) {
        result[i] = str2[j];
    }

    printf("Concatenated String: %s\n", result);

    return 0;
}
