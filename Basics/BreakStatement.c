#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    int i;

    for (i = 0; i <= n; i++)
    {

        printf("the no. is %d\n", i);

        if (i >= 50)
        {

            break;
        }
    }

    return 0;
}