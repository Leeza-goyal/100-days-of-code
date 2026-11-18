#include <stdio.h>

int main()
{
    char str[100];
    int i, j, length, maxLength = 0;
    int found[256];

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        for(j = 0; j < 256; j++)
        {
            found[j] = 0;
        }

        length = 0;

        for(j = i; str[j] != '\0'; j++)
        {
            if(found[(unsigned char)str[j]] == 1)
            {
                break;
            }

            found[(unsigned char)str[j]] = 1;
            length++;
        }

        if(length > maxLength)
        {
            maxLength = length;
        }
    }

    printf("%d", maxLength);

    return 0;
}
