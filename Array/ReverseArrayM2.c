#include <stdio.h>
void swap(int n, int arr[])
{

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j--;
    }
    return;
}
int main()
{

    int n;
    printf("Enter the size of array ; ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    swap(n, arr);

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}