#include <stdio.h>
void sum(int x, int y)
{
    if (x == 0) // base
    {
        printf("%d", y); // 
        return;
    }
    sum(x - 1, y + x); // x ki value joki user ne dia h usme se 1 - 1 minus hota jaa rha h and y = 0 me add hota jaa rha h (like n = x = 5,4,3,2,1)(y = 0 + 5 + 4 + 3 + 2 + 1 = 15)
    return ;
}
int main()
{
    int n;
    printf("Enter a no. ");
    scanf("%d", &n);

    sum(n, 0);

    return 0;
}