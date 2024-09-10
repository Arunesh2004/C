#include <stdio.h>
int main()
{
    int arr[6];

    for (int i = 0; i <6; i++)
    {
        int a = i + 1;
        printf("Enter element no. %d : ", a);
        scanf("%d ", &arr[i]);
    }

    for (int i = 0; i <6; i++)
    {
        
        printf("%d : ", arr[i]);
        
    }

    
    return 0;
}