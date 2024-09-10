#include <stdio.h>

int power(int a, int b)
{

    if (b == 1)
        return a;

    int x = power(a, b / 2);

    if (b % 2 == 0)
    {
        int p = x * x;
        return p;
    }
    if (b % 2 != 0)
    {
        int p = x * x * a;
        return p;
    }

    
}
int main()
{

    int a;
    printf("Enter base : ");
    scanf("%d", &a);

    int b;
    printf("Enter power : ");
    scanf("%d", &b);

    int p = power(a, b);

    printf("%d to the power %d is %d", a, b, p);

    return 0;
}