#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) // rows
    {
        for (int j = 1; j <= n; j++) // columns
        {
            if (i==j || i+j==n+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }


        }
        printf("\n");
    }
    return 0;
}