#include <stdio.h>

typedef struct {
    int hrs;
    int min;
    int sec;
} Time;

Time getTime() {
    Time time;

    printf("Enter the time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time.hrs, &time.min, &time.sec);

    return time;
}

void calculateTimeDifference(Time startTime, Time endTime, Time *difference) {
    int totalSeconds1, totalSeconds2, diffSeconds;

    totalSeconds1 = startTime.hrs * 3600 + startTime.min * 60 + startTime.sec;
    totalSeconds2 = endTime.hrs * 3600 + endTime.min * 60 + endTime.sec;
    diffSeconds = totalSeconds2 - totalSeconds1;

    difference->hrs = diffSeconds / 3600;
    diffSeconds %= 3600;
    difference->min = diffSeconds / 60;
    difference->sec = diffSeconds % 60;
}

void displayTimeDifference(Time difference) {
    printf("Time difference: %d hours, %d minutes, %d seconds\n",
           difference.hrs, difference.min, difference.sec);
}

int main() {
    Time startTime, endTime, difference;

    printf("Enter the start time:\n");
    startTime = getTime();

    printf("Enter the end time:\n");
    endTime = getTime();

    calculateTimeDifference(startTime, endTime, &difference);

    displayTimeDifference(difference);

    return 0;
}
