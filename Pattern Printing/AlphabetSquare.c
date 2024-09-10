#include <stdio.h>
int main()
{

    int n;
    printf("enter a no. : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= n; j++)
        {
            int d = a+64;
            char ch = (char)d; // ch = (char)65 == 'A'

            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}