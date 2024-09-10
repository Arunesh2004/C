#include <stdio.h>
#include <stdbool.h>
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

    bool flag = false; // false means not present
    int index = 0;

    int x;
    printf("Enter the element you want to search : ");
    scanf("%d", &x);

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == x)
        {

            flag = true;
            index = i;
            break;
        }
    }

    if (flag == true)
    {
        printf("%d is present in the array and its index is %d", x, index);
    }
    else
    {
        printf("%d is not present in the array", x);
    }

    return 0;
}