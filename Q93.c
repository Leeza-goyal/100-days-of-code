#include <stdio.h>

int main()
{
    char a[100], b[100];
    int freq[256] = {0};
    int i, flag = 1;

    fgets(a, 100, stdin);
    fgets(b, 100, stdin);

    for(i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        freq[(unsigned char)a[i]]++;
    }

    for(i = 0; b[i] != '\0' && b[i] != '\n'; i++)
    {
        freq[(unsigned char)b[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(freq[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagram");
    else
        printf("Not Anagram");

    return 0;
}
