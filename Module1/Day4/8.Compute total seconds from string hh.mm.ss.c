#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[10];
    char* token;
    int hours, minutes, seconds;
    int totalSeconds;

    printf("Enter a time string in the format 'hh:mm:ss': ");
    scanf("%s", input);

    token = strtok(input, ":");  // Split string at the ':' delimiter
    hours = strtoul(token, NULL, 10);  // Convert the hours substring to an unsigned long

    token = strtok(NULL, ":");  // Continue splitting from the previous position
    minutes = strtoul(token, NULL, 10);  // Convert the minutes substring to an unsigned long

    token = strtok(NULL, ":");  // Continue splitting from the previous position
    seconds = strtoul(token, NULL, 10);  // Convert the seconds substring to an unsigned long

    totalSeconds = hours * 3600 + minutes * 60 + seconds;  // Compute the total seconds

    printf("Total seconds: %lu\n", totalSeconds);

    return 0;
}


