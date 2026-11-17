#include <stdio.h>

int main()
{
    int nums[100], n;
    int i, candidate, count = 0, frequency = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if(nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    for(i = 0; i < n; i++)
    {
        if(nums[i] == candidate)
        {
            frequency++;
        }
    }

    if(frequency > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}
