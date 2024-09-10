#include <stdio.h>
int main()
{
    int marks[10] = {99,22,34,65,12,88,53,75,89,33};

    for (int i = 0; i <= 9; i++)
    {
        if (marks[i] < 33)
        {
            printf("%d ",i);
        }
    }

    return 0;
}