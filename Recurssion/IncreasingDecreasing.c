#include <stdio.h>
void incdec(int x)
{
    if (x == 0)
    {
        return;
    }

    printf("%d\n", x);
    incdec(x - 1);
    printf("%d\n", x);
    return;
}
int main()
{
    int n;
    printf("Enter a no : ");
    scanf("%d", &n);

    incdec(n);

    return 0;
}