#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int nsp = 0;
    int nst = n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= nst; j++)
        {
            printf("* ");
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
        }
        nsp = nsp + 2;
        for (int l = 1; l <= nst; l++)
        {
            printf("* ");
        }
        nst--;
        printf("\n");
    }
    return 0;
}