#include <stdio.h>

int factorial(int x)
{ // the value of n given by the user becomes x
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact; // jaha jaha pe bhi factorial() likha h waha pe fact ki value return ho jayegi
}
int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int r;
    printf("Enter the value of r : ");
    scanf("%d", &r);
    if (n > r)
    {

        int nfactorial = factorial(n);
        int rfactorial = factorial(r);
        int nrfactorial = factorial(n - r);

        int ncr = nfactorial / (rfactorial * nrfactorial);
        printf("The value of NCR is : %d", ncr);
    }

    else
    {
        printf("n should be greater than r");
    }

    return 0;
}