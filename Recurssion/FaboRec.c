#include <stdio.h>
int fabo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int ans1 = fabo(n - 1);
    int ans2 = fabo(n - 2);
    int sum = ans1 + ans2;  //fabonacci series :==> 1,1,2,3,5,8,...... as we can see 8 = 5 + 3 i.e nth term is sum of (n-1)th and (n-2)th term
}
int main()
{

    int n;
    printf("Enter a no. :  ");
    scanf("%d", &n);

    int f = fabo(n);

    printf("%d", f);

    return 0;
}