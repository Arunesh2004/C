#include <stdio.h>
int ways(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    int ans1 = ways(n - 1);
    int ans2 = ways(n - 2);
    int ans3 = ways(n - 3);
    int total = ans1 + ans2 + ans3;
    return total;
}
int main()
{
    int n;
    printf("Enter no. of stairs : ");
    scanf("%d", &n);

    int s = ways(n);

    printf("no. of ways in which you can climb %d stairs if you take max 3 steps at a time are : %d", n, s);

    return 0;
}