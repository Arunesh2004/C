#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    int max = arr[0];
    int smax = arr[0];

    for (int i = 0; i <= 7; i++)
    {
        if (max < arr[i])
        {
            smax = max;   // smax is old max
            max = arr[i]; // max is new maximum
        }
        else if (smax < arr[i] && max != arr[i]) // ye run ho rha h mean max > arr[i],,,, this means ki koi problem nhi hoga now coz if original max is maximum that means the new one willl be 2nd max
        {
            smax = arr[i];
        }
    }

    printf("the second largest no. is : %d", smax);
    return 0;
}