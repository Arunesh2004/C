#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of element : ");
    scanf("%d", &n);

    int arr[n];

    int x;
    printf("Enter the max no. : ");
    scanf("%d", &x);

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        if (x < arr[i])
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}