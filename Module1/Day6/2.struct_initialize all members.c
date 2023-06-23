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
int main() {
    const int arrsize = 5;
    struct Student stu[arrsize];
    initialize(stu, arrsize);
    printf("Initialized Structured Array:\n");
    for (int i = 0; i < arrsize; i++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",i + 1, stu[i].rollno, stu[i].name, stu[i].marks);
    }
    return 0;
}