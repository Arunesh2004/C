#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n + 1 - i; j++) // column
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}