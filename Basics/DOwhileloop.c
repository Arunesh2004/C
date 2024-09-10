#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int m = 1;

    do
    {

        printf("%d\n", n * m);

        m = m + 1;

    } while (m <= 10);

    return 0;
}