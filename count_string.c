//Count no of words, no of sentences and no of space in a string
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, sentences = 0, spaces = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            spaces++;
        }
        if(str[i] == '.' || str[i] == '!' || str[i] == '?') {
            sentences++;
        }
    }

    

    printf("Number of words: %d\n", spaces+1);
    printf("Number of sentences: %d\n", sentences);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}