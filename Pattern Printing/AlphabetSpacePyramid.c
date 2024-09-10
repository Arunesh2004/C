#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int nsp = 1;
    int no = n;
    int b = 1;

    for (int i = 1; i <= 2 * n + 1; i++)
    {
        int d = b + 64;
        char ch = (char)d;

        printf("%c ", d);
        b++;
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int b = 1;

        for (int j = 1; j <= no; j++)
        {
            int d = b + 64;
            char ch = (char)d;

            printf("%c ", d);
            b++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            b++;
        }
        nsp = nsp + 2;
        for (int l = 1; l <= no; l++)
        {
            int d = b + 64;
            char ch = (char)d;

            printf("%c ", d);
            b++;
        }
        no--;
        printf("\n");
    }
    return 0;
}