#include <stdio.h>
#include <ctype.h>
#include <string.h>

void copyFile(FILE *source, FILE *destination, int option) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        switch (option) {
            case 'u':
                fputc(toupper(ch), destination);
                break;
            case 'l':
                fputc(tolower(ch), destination);
                break;
            case 's':
                fputc(toupper(ch), destination);
                break;
            default:
                fputc(ch, destination);
                break;
        }
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *destinationFile;
    char option;
    int copyNormal = 1;

    if (argc < 3) {
        printf("Insufficient arguments.\n");
        return 1;
    }

    if (argv[1][0] == '-') {
        option = argv[1][1];
        if (argc < 4) {
            printf("Insufficient arguments.\n");
            return 1;
        }
        copyNormal = 0;
    } else {
        option = 'n'; // No option specified
    }

    sourceFile = fopen(argv[copyNormal + 1], "r");
    if (sourceFile == NULL) {
        printf("Error opening the source file.\n");
        return 1;
    }

    destinationFile = fopen(argv[copyNormal + 2], "w");
    if (destinationFile == NULL) {
        printf("Error creating the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    copyFile(sourceFile, destinationFile, option);

    fclose(sourceFile);
    fclose(destinationFile);

    printf("File copied successfully.\n");

    return 0;
}
