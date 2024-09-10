#include <stdio.h>
int main()
{
    int r;
    printf("Enter no. of rows : ");
    scanf("%d", &r);

    int c;
    printf("Enter no. of columns : ");
    scanf("%d", &c);

    int arr[r][c];

    printf("fill matrix : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your matrix : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int maxsum = arr[0][0];
    int row = 0;

    for (int i = 0; i <= r - 1; i++)
    {
        int sum = 0;
        for (int j = 0; j <= c - 1; j++)
        {
            sum = sum + arr[i][j];

            if (sum > maxsum)
            {
                maxsum = sum;
                row = i + 1;
            }
        }
    }

    printf("the sum of the max row is %d and its row no. is : %d", maxsum, row);

    return 0;
}