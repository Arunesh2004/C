#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

        for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];  // can also use #include<limits.h>  and int max = INT_MIN  to get the minimum possible no.

    for (int i = 1; i <= n - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("The largest element is : %d", max);

    return 0;
}