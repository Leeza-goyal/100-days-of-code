#include <stdio.h>

int main()
{
    char s[100], t[100];
    int freq[26] = {0};
    int i, flag = 1;

    scanf("%s", s);
    scanf("%s", t);

    for(i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    for(i = 0; t[i] != '\0'; i++)
    {
        freq[t[i] - 'a']--;
    }

    for(i = 0; i < 26; i++)
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
