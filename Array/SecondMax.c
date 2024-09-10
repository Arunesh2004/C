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

    int max = arr[0];
    int smax = arr[0];

    for (int j = 0; j <= n - 1; j++)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    for (int k = 0; k <= n - 1; k++)
    {
        if (max != arr[k] && smax < arr[k])
        {
            smax = arr[k];
        }
    }

    printf("The second largest integer in the set is : %d", smax);
    return 0;
}