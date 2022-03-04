#include <stdio.h>

void main()
{
    int n, a[5], i = 0, loc = 0, item;
    printf("Enter the size of the list in number ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element %d ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be found ");
    scanf("%d", &item);
    for (i = 0; i < n; i++)
    {
        if (a[i] == item)
        {
            loc = i + 1;
            printf("The element found in location %d ", loc);
            break;
        }
    }
    if (loc == 0)
    {
        printf("Element not found");
    }
}