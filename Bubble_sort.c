#include <stdio.h>
void main()
{
    int a[10], n, i, j, temp;
    printf("Enter the size of the file ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the data %d ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Your data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("Your sorted data is \n ");
    for (i = 0; i < n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("\n");
}