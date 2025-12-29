#include <stdio.h>
int main(){
    int a=10;
    char b= 'A';
    long double c = 2.5;
    printf("Integer: %d\n", sizeof(a));
    printf("Character: %d\n", sizeof(b));
    printf("Float: %d\n", sizeof(5.0));
    printf("Double: %d\n", sizeof(c));
}