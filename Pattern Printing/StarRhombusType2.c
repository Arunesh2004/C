#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int nsp = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            printf("  ");
        }
        nsp++;
        for (int k = 1; k <= n; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}