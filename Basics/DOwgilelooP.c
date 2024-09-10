#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int m = 0;

    do
    {

        printf("%d\n", m);
        m = m + 1;

    } while (m <= n);

    return 0;
}