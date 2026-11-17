#include <stdio.h>

int main()
{
    int n, low = 1, high, x = -1;

    scanf("%d", &n);

    high = n;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        int leftSum = mid * (mid + 1) / 2;
        int totalSum = n * (n + 1) / 2;
        int rightSum = totalSum - leftSum + mid;

        if(leftSum == rightSum)
        {
            x = mid;
            break;
        }
        else if(leftSum < rightSum)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("%d", x);

    return 0;
}
