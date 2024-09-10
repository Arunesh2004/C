#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    

    for (int i = 0; i <= n - 1; i++)
    {
        bool flag = false;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }

        if (flag == false)
        {
            printf("the unique element is : %d", arr[i]);
            break; // if you want to print multiple elements remove break  and   since there is no other condition that means the no. we are compairing everything is unique itself
        }
    }
    return 0;
}