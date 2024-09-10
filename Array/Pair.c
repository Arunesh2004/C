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

    int x;
    printf("Enter a no. : ");
    scanf("%d", &x);

    int totalpairs = 0;

    for (int j = 0; j <= n - 1; j++)
    {
        for (int k = j+1; k <= n - 1; k++) // j + 1 coz waapis khud se compare nhi karna h
        {
            if (arr[j] + arr[k] == x)
            {

                totalpairs++;

                printf("(%d , %d)\n", arr[j], arr[k]);
            }
        }
    }

    printf("The no. of pairs whose sum id equal to %d are : %d", x, totalpairs);

    return 0;
}