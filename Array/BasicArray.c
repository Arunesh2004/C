#include <stdio.h>
int main()
{
    int arr[5] = {2, 5, 7, 8, 3};
    printf("%d\n", arr[3]);

    float frr[5] = {1.2, 3.5, 6.1, 1.1, 8.6};
    printf("%f\n", frr[2]);

    char crr[5] = {'a', 'e', 'd', 'g', 's'};
    printf("%c\n", crr[4]);

    arr[3] = 10;
    printf("%d\n", arr[3]); // updation

    frr[2] = 5.5;
    printf("%f\n", frr[2]);

    crr[4] = 'd';
    printf("%c\n", crr[4]);

    return 0;
}