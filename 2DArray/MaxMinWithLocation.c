#include <stdio.h>
int main()
{
    int r;
    printf("Enter thr no. of rows : ");
    scanf("%d", &r);

    int c;
    printf("Enter thr no. of columns : ");
    scanf("%d", &c);

    int arr[r][c];

    printf("Fill your matrix : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }

    printf("Your matrix is : \n");

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    int max = arr[0][0];
    int idxr = 0;
    int idxc = 0;

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                idxr = i;
                idxc = j;
            }
        }
    }

    printf("the largest element is : %d and its index is (%d,%d)", max, idxr, idxc);
    printf("\n");

    int min = arr[0][0];
    int idx2r = 0;
    int idx2c = 0;

    for (int i = 0; i <= r - 1; i++)
    {
        for (int j = 0; j <= c - 1; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
                idx2r = i;
                idx2c = j;
            }
        }
    }

    printf("the smallest element is : %d and its index is (%d,%d)", min, idx2r, idx2c);

    return 0;
}