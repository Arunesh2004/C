#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) //no. of lines
    {
        int a = i - 1;
        for (int j = 1; j <= n - i; j++) // no. of spaces
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++) // no. triangle
        {
            printf("%d ", k);
        }

        for (int l = 1; l <= i - 1; l++) // extra cheez
        {
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}