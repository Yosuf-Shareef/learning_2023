#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
} Student;

int main() {
    Student student1 = {"ROBERT", 25};
    Student student2 = {"JACK", 21};

    printf("Before swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    Student tempStudent;
    strcpy(tempStudent.name, student1.name);
    tempStudent.age = student1.age;

    strcpy(student1.name, student2.name);
    student1.age = student2.age;

    strcpy(student2.name, tempStudent.name);
    student2.age = tempStudent.age;

    printf("\nAfter swapping:\n");
    printf("Student 1: Name - %s, Age - %d\n", student1.name, student1.age);
    printf("Student 2: Name - %s, Age - %d\n", student2.name, student2.age);

    return 0;
}
