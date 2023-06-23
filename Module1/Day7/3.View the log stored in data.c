#include <stdio.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[9];
};

int main() {
    FILE *file;
    struct LogEntry entries[MAX_ENTRIES];
    int numEntries = 0;
    char line[100];

    // Open the CSV file
    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    // Skip the header line
    fgets(line, sizeof(line), file);

    // Read data from the file and store in the array
    while (fgets(line, sizeof(line), file) != NULL && numEntries < MAX_ENTRIES) {
        sscanf(line, "%d,%9[^,],%f,%d,%d,%8s",
               &entries[numEntries].entryNo,
               entries[numEntries].sensorNo,
               &entries[numEntries].temperature,
               &entries[numEntries].humidity,
               &entries[numEntries].light,
               entries[numEntries].timestamp);
        numEntries++;
    }

    // Close the file
    fclose(file);

    // Display the extracted data
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTimestamp\n");
    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n",
               entries[i].entryNo,
               entries[i].sensorNo,
               entries[i].temperature,
               entries[i].humidity,
               entries[i].light,
               entries[i].timestamp);
    }

    return 0;
}
