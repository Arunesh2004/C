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

    int sumOdd = 0;
    int sumEven = 0;

        for (int i = 0; i <= n - 1; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }
    int result = sumOdd - sumEven;

    printf("The difference of sumOdd & sumEven is : %d", result);

    return 0;
}