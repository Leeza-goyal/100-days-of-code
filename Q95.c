#include <stdio.h>

int main()
{
    char a[100], b[100];
    int i, j, len1 = 0, len2 = 0;
    int found = 0;

    fgets(a, 100, stdin);
    fgets(b, 100, stdin);

    for(i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        len1++;
    }

    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++)
    {
        len2++;
    }

    if(len1 == len2)
    {
        for(i = 0; i < len1; i++)
        {
            for(j = 0; j < len1; j++)
            {
                if(a[(i + j) % len1] != b[j])
                {
                    break;
                }
            }

            if(j == len1)
            {
                found = 1;
                break;
            }
        }
    }

    if(found == 1)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
