#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    int rollno;
    char name[20];
    float marks;
};
void structarray(const char *input, struct Student *students, int arrsize) {
    char tempin[100];
    strcpy(tempin, input);
    for (int i = 0; i < arrsize; i++) {
        char *token = strtok(tempin, " ");
        students[i].rollno = atoi(token);
        tempin[strlen(token)] = '\0';
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);
        tempin[strlen(token) + 1] = '\0';
        token = strtok(NULL, " ");
        students[i].marks = atof(token);
        tempin[strlen(token) + 1] = '\0';
        strcpy(tempin, &tempin[strlen(token) + 1]);
    }
}
int main() {
    const char input[] = "1001 Aron 100.00";
    const int arrsize = 1;
    struct Student *students = malloc(arrsize * sizeof(struct Student));
    structarray(input, students, arrsize);
    printf("Parsed Structure Array:\n");
    for (int i = 0; i < arrsize; i++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }
    free(students);
    return 0;
}