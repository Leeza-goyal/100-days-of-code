#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    int ch;

    scanf("%99s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File exists\n");

        while((ch = fgetc(fp)) != EOF)
        {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
