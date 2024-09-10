#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of Array : ");
    scanf("%d",&n);

    int arr[n];

    int pro = 1;

    for(int i= 0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

    for(int i= 0;i<=n-1;i++){
       pro = pro*arr[i];
    }
    printf("the product of the elements is : %d",pro);

    return 0;
}