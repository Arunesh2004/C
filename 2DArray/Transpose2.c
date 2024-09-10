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

    int brr[c][r];

    for (int i = 0; i <= c - 1; i++)
    {
        for (int j = 0; j <= r - 1; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }

    printf("\n");

    for (int i = 0; i <= c - 1; i++)
    {
        for (int j = 0; j <= r - 1; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}