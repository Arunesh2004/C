#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];
    int brr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j <= n - 1; j++)
    {

        brr[j] = arr[n - 1 - j];
    }

    int x = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == brr[i])
        {
            x++;
        }
    }
    if (x == n - 1)
    {
        printf("its a palindrome");
    }
    else
    {
        printf("its not a palindrome");
    }

    // for (int k = 0; k <= n - 1; k++)
    // {
    //     printf("%d ", brr[k]);
    // }
    return 0;
}