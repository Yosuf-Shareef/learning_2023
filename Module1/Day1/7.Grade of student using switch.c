#include <stdio.h>
char get_Grade(int score);

int main() {
    int score;
    printf("Enter the student's score: ");
    scanf("%d", &score);

    char grade = getGrade(score);
   

    switch (grade) {
        case 65:
            printf("Grade A\n");
            break;
        case 66:
            printf("Grade B\n");
            break;
        case 67:
            printf("Grade C\n");
            break;
        case 68:
            printf("Grade D\n");
            break;
        case 69:
            printf("Grade E\n");
            break;
        case 70:
            printf("Grade F\n");
            break;
        default:
            printf("Invalid score\n");
            break;
    }

    return 0;
}
char get_Grade(int score) {
    switch (score) {
        case 90 ... 100:
            return 'A';
            break;
        case 75 ... 89:
            return 'B';
            break;
        case 60 ... 74:
            return 'C';
            break;
        case 50 ... 59:
            return 'D';
            break;
        case 36 ... 49:
            return 'E';
            break;
        case 0 ... 35:
            return 'F';
            break;
        default:
            return '-';
    }
}

