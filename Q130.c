#include <stdio.h>

int main()
{
    FILE *fp;
    char name[100];
    int roll, n, i;
    float marks;

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%99s", name);
        scanf("%d", &roll);
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Student Records:\n");

    while(fscanf(fp, "%99s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s\n", name);
        printf("Roll Number: %d\n", roll);
        printf("Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    return 0;
}
