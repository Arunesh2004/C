// pass by reference i.e. transfer of addresses
#include <stdio.h>

void swap(int *x, int *y)
{ // int* means pointer i.e x and y will store address of a and by passes by below

    int temp = *x; // *x means ki x me jo address stored h (i.e a ki) uspe jao and wala pe jo value h usko yaha laake temp me daal do
    *x = *y;
    *y = temp;

    return ;
}
int main()
{

    int a;
    printf("a = ");
    scanf("%d", &a);

    int b;
    printf("b = ");
    scanf("%d", &b);

    swap(&a, &b); //&a and &b means we are sending addresses of a and b instead of their values

    printf("the value of a is : %d\n", a);
    printf("the value of b is : %d", b); // to print address we use %p along with &a

    return 0;
}