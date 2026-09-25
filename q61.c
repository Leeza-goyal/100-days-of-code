#include<stdio.h>

int main()
{
    int n, i, element, index = -1;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    for(i=0; i<n; i++)
    {
        if(a[i] == element)
        {
            index = i;
            break;
        }
    }

    if(index != -1)
    {
        printf("Found at index %d", index);
    }
    else
    {
        printf("-1");
    }

    return 0;
}