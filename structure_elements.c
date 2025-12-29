//pass structure elements to functions and print them
#include <stdio.h>
struct Student {
    char name[50];
    int age;
    float marks;
};
void printStudent(char name[50], int age, float marks) {
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Marks: %.2f\n", marks);
}
int main() {
    struct Student s[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter age: ");
        scanf(" %d", &s[i].age);
        printf("Enter marks: ");
        scanf(" %f", &s[i].marks);
        printf("\n");
    }
    for (int i = 0; i < 3; i++) {
        printStudent(s[i].name, s[i].age, s[i].marks);
    }
    return 0;
}