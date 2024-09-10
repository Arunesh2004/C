#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int nsp = 1;
    int no = n;

    for (int i = 1; i <= 2 * n + 1; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 1;

        for (int j = 1; j <= no; j++)
        {
            printf("%d ", a);
            a++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        nsp = nsp + 2;
        for (int l = 1; l <= no; l++)
        {
            printf("%d ", a);
            a++;
        }
        no--;
        printf("\n");
    }
    return 0;
}