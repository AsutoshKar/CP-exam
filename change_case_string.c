//Change the case of each letter of string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    
    // Change case of each letter
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // Convert to lowercase
        }
    }
    
    printf("String after changing case: %s\n", str);
    
    return 0;
}