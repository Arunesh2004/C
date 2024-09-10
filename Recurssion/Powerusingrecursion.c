#include <stdio.h>

int power(int a, int b)
{

    if (b == 0)
        return 1;
    int recAns = a * power(a, b - 1); // since 2 to the power 4 :=> 2 * 2 to the power 4 - 1....... then 2 to the power 3 :=> 2 * 2 to the power 3 - 1 ,......
    return recAns;
}
int main()
{
    int a;
    printf("Enter base : ");
    scanf("%d", &a);

    int b;
    printf("Enter power ; ");
    scanf("%d", &b);

    int p = power(a, b);

    printf("%d to the power %d is %d", a, b, p);

    return 0;
}