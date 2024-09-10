#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 2; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i <= n - 2; i++)
    {
        sum = sum + arr[i];
    }

    int sum2 = (n * (n + 1)) / 2;

    int x;
    x = sum2 - sum;
    printf("The missing element is : %d", x);

    return 0;
}