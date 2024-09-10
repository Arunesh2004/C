#include <stdio.h>
void reverse(int arr[], int fi, int li)
{
    for (int i = fi, j = li; i <= j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
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

    int k;
    printf("Enter the degree of rotation : ");
    scanf("%d ", &k);

    k = k % n; // step 1 = to store remainder

    reverse(arr, 0, n - 1); // step 2 = reverse the whole array
    reverse(arr, 0, k - 1); // step 3 = reverse from 0 to the degree(k-1)
    reverse(arr, k, n - 1); // step 4 = reverse from degree(k) to no. of elements(n-1)

    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}