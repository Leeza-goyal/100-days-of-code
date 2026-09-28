#include<stdio.h>

int main()
{
    int n, i, pos;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position to delete: ");
    scanf("%d", &pos);

    for(i=pos; i<n-1; i++)
    {
        a[i] = a[i+1];
    }

    n--;

    printf("Array after deletion: ");
    for(i=0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
