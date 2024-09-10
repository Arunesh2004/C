#include <stdio.h>
int main()
{
    int r;
    printf("Enter the no. of rows : ");
    scanf("%d", &r);

    int c;
    printf("Enter the no. of columns : ");
    scanf("%d", &c);

    int arr[r][c];

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
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