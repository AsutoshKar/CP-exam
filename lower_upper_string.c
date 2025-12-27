//Read a string and list its number of lowercase and uppercase letters
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, lower = 0, upper = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    
    // Count lowercase and uppercase letters
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        }
    }
    
    printf("Number of lowercase letters: %d\n", lower);
    printf("Number of uppercase letters: %d\n", upper);
    
    return 0;
}