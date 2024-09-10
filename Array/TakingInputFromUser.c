#include <stdio.h>
int main()
{
    int arr[5];

    printf("Enter 1st element : ");
    scanf("%d", &arr[0]);

    printf("Enter 2nd element : ");
    scanf("%d", &arr[1]);

    printf("Enter 3rd element : ");
    scanf("%d", &arr[2]);

    printf("Enter 4th element : ");
    scanf("%d", &arr[3]);

    printf("Enter 5th element : ");
    scanf("%d", &arr[4]);

    printf("The elements are : %d , %d , %d , %d , %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

    return 0;
}
