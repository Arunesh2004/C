#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int m = 0;

    while (m <= 10)
    {

        printf("%d\n", m * n);
        m = m + 1;
    }

    return 0;
}