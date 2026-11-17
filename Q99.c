#include <stdio.h>

int main()
{
    char date[20];
    int i;

    scanf("%s", date);

    for(i = 0; i < 2; i++)
    {
        printf("%c", date[i]);
    }

    printf("-Apr-");

    for(i = 6; i < 10; i++)
    {
        printf("%c", date[i]);
    }

    return 0;
}
