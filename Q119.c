#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, repeated = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        repeated = repeated ^ arr[i];
    }

    for(i = 1; i < n; i++)
    {
        repeated = repeated ^ i;
    }

    printf("%d", repeated);

    return 0;
}
