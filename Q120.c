#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, newSentence = 1;

    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isalpha((unsigned char)str[i]))
        {
            if(newSentence == 1)
            {
                str[i] = toupper((unsigned char)str[i]);
                newSentence = 0;
            }
            else
            {
                str[i] = tolower((unsigned char)str[i]);
            }
        }

        if(str[i] == '.' || str[i] == '?' || str[i] == '!')
        {
            newSentence = 1;
        }
    }

    printf("%s", str);

    return 0;
}
