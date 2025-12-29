//write code to take structure directly inside function
#include <stdio.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
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
        printStudent(s[i]);
    }
    return 0;
}
