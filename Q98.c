#include <stdio.h>

int main()
{
    char str[100];
    int i, lastSpace = -1;

    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        if(str[i] == ' ')
        {
            lastSpace = i;
        }
    }

    for(i = 0; i < lastSpace; i++)
    {
        if(i == 0 || str[i - 1] == ' ')
        {
            if(str[i] != ' ')
            {
                printf("%c.", str[i]);
            }
        }
    }

    if(lastSpace != -1)
    {
        printf(" ");

        for(i = lastSpace + 1; str[i] != '\0' && str[i] != '\n'; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("%s", str);
    }

    return 0;
}
