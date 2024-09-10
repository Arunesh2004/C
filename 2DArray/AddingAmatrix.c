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

    int sr;
    printf("Enter starting row : ");
    scanf("%d", &sr);

    int er;
    printf("Enter ending row : ");
    scanf("%d", &er);

    int sc;
    printf("Enter starting column : ");
    scanf("%d", &sc);

    int ec;
    printf("Enter ending column : ");
    scanf("%d", &ec);

    int sum = 0;

    for (int i = sr; i <= er; i++)
    {
        for (int j = sc; j <= ec; j++)
        {
            sum = sum + arr[i][j];
        }
    }

    printf("sum of the asked matrix is : %d", sum);

    return 0;
}