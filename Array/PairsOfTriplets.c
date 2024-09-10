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

    int triplets = 0;

    for (int j = 0; j <= n - 1; j++)
    {
        for (int k = j + 1; k <= n - 1; k++)
        {
            for (int l = k + 1; l <= n - 1; l++)
            {
                if (arr[j] + arr[k] + arr[l] == x)
                {
                    triplets++;

                    printf("(%d,%d,%d)\n", arr[j], arr[k], arr[l]);
                }
            }
        }
    }
    printf("The no. of pairs whose sum id equal to %d are : %d", x, triplets);
    return 0;
}