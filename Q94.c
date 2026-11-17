#include <stdio.h>

int main()
{
    char str[200];
    int i, start = 0, length = 0;
    int maxLength = 0, maxStart = 0;

    fgets(str, 200, stdin);

    for(i = 0; ; i++)
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
        {
            if(length > maxLength)
            {
                maxLength = length;
                maxStart = start;
            }

            length = 0;
            start = i + 1;

            if(str[i] == '\n' || str[i] == '\0')
                break;
        }
        else
        {
            length++;
        }
    }

    for(i = maxStart; i < maxStart + maxLength; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}
