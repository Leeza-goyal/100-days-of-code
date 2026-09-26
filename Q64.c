#include<stdio.h>

int main()
{
    int num, digit, i;
    int count[10] = {0};
    int max = 0, ans = 0;

    printf("Enter the number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);

    return 0;
}