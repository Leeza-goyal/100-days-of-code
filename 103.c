#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, total = 0, leftSum = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total = total + arr[i];
    }

    for(i = 0; i < n; i++)
    {
        if(leftSum == total - leftSum - arr[i])
        {
            printf("%d", i);
            return 0;
        }

        leftSum = leftSum + arr[i];
    }

    printf("-1");

    return 0;
}
