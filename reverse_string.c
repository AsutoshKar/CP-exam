// Reverse a string without using other array and find it wheather it is palindrome or not
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], cpy[100], temp;
    int i, j, n;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
    strcpy(cpy,str); //copying original string to another string

    n=strlen(str);
    for(i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }

    printf("Reversed String: %s\n", str);

    n=strcmp(str,cpy);
    if (n==0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
