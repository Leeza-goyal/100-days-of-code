#include <stdio.h>

int main()
{
    int nums[100], ans[100];
    int n, i, prefix = 1, suffix = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    for(i = 0; i < n; i++)
    {
        ans[i] = prefix;
        prefix = prefix * nums[i];
    }

    for(i = n - 1; i >= 0; i--)
    {
        ans[i] = ans[i] * suffix;
        suffix = suffix * nums[i];
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", ans[i]);
    }

    return 0;
}
