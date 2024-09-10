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

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            arr[i][j] = 10;
        }
    }

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}