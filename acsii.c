//Display acscii value of a character of string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    printf("Character\tASCII Value\n");

    for(i = 0; str[i] != '\0'; i++) {
        printf("%c\t\t%d\n", str[i], str[i]);
    }
    
    return 0;
}