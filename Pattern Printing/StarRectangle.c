#include <stdio.h>
int main()
{

    int n;
    printf("enter no. of rows : ");
    scanf("%d", &n);
    int m;
    printf("enter no. of columns : ");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) // no. of rows OR outer loop is to print no. of lines
    {

        for (int j = 1; j <= m; j++) // no. of  columns OR inner loop is to print no. of stars in each line
        {

            printf("*");
        }
        printf("\n");
    }
    return 0;
}