#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char rollNumber[10];
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int numStudents, i;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Dynamically allocate memory for an array of students
    Student* students = (Student*)malloc(numStudents * sizeof(Student));

    // Read data for each student
    for (i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%s", students[i].rollNumber);
        printf("Name(Replace space with _): ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Display the data for each student
    printf("\nStudent details:\n");
    for (i = 0; i < numStudents; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printf("Roll Number: %s\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    // Free the dynamically allocated memory
    free(students);

    return 0;
}
