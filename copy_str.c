//Copy a string to another string(without using library function)
#include <stdio.h>
#include <string.h>
int main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", source);

    // Copying source string to destination string
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }
    printf("Source String: %s\n", source);
    printf("Destination String: %s\n", destination);

    return 0;
}
