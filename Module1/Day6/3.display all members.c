#include <stdio.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void initialize(struct Student *stu, int arrsize) {
    for (int i = 0; i < arrsize; i++) {
        printf("Enter details for Student %d:\n", i + 1); 
        printf("Roll No: ");
        scanf("%d", &(stu[i].rollno));
        printf("Name: ");
        scanf("%s", stu[i].name);
        printf("Marks: ");
        scanf("%f", &(stu[i].marks));
        printf("\n");
    }
}
void display(const struct Student *stu, int arrsize) {
    printf("Structured Array:\n");
    for (int i = 0; i < arrsize; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", stu[i].rollno);
        printf("Name: %s\n", stu[i].name);
        printf("Marks: %.2f\n", stu[i].marks);
        printf("\n");
    }
}
int main() {
    const int arrsize = 5;
    struct Student stu[arrsize];
    initialize(stu, arrsize);
    display(stu, arrsize);
    return 0;
}