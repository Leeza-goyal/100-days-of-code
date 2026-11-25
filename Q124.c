#include <stdio.h>

int main()
{
    FILE *source, *destination;
    char sourceName[100], destName[100];
    int ch;

    printf("Enter source filename: ");
    scanf("%99s", sourceName);

    printf("Enter destination filename: ");
    scanf("%99s", destName);

    source = fopen(sourceName, "r");

    if(source == NULL)
    {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(destName, "w");

    if(destination == NULL)
    {
        printf("Destination file cannot be opened");
        fclose(source);
        return 1;
    }

    while((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully");

    return 0;
}
