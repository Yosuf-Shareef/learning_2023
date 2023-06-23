#include <stdio.h>
#include <string.h>
#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100
typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
} Student;
Student students[MAX_STUDENTS]; 
int search(const char* name, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i;
        }
    }
    return -1;
}
int main() {
    int numStudents = 4;
    strcpy(students[0].name, "Gupta");
    students[0].age = 21;
    strcpy(students[1].name, "Chandu");
    students[1].age = 20;
    strcpy(students[2].name, "Raghu");
    students[2].age = 22;
    strcpy(students[3].name, "Charan");
    students[3].age = 21;
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    int index = search(searchName, numStudents);
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
    } else {
        printf("Student not found.\n");
    }
    return 0;
}