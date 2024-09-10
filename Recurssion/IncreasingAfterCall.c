#include <stdio.h>
void increasing(int x )
{
    if (x == 0) // base
    {
        return;
    }
    increasing(x - 1); //1 to n // call
    printf("%d\n", x);
    //increasing(x - 1); // n to 1 // call
    return;
}
int main()
{
    int n;
    printf("Enter a no. : ");
    scanf("%d", &n);

    increasing(n);

    return 0;
}