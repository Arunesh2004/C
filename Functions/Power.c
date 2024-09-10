#include <stdio.h>

int power(int a, int b)
{

    int x = 1;

    for (int i = 1; i <= b; i++)
    {
        x = x * a;  // x initially 1 h then x = 1*a --> a*a --> a*a*a ....... upto b times
    }
    return x;
}
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d", &a);

    int b;
    printf("Enter base : ");
    scanf("%d", &b);

    int p = power(a, b);

    printf("%d to thi power %d is : %d", a, b, p);

    return 0;
}