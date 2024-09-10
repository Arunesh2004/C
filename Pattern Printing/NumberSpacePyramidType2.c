#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int nsp = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        nsp = nsp + 2;
        for (int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", j);
            y
        }

        printf("\n");
    }
    return 0;
}