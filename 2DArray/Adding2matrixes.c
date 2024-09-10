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

    printf("fill matrix 1 : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    int brr[r][c];
    printf("fill matrix 2 : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &brr[i][j]);
        }
        printf("\n");
    }

    printf("Your 1st matrix : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("Your 2nd matrix : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    printf("their sum is : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}