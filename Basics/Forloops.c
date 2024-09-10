#include <stdio.h>
int main()
{

    int j;
    printf("enter a no. : ");
    scanf("%d", &j);

    int i;

    for (i = 1; i <= 10; i++)
    {

        printf("%d\n", i * j);
    }

    return 0;
}