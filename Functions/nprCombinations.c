#include<stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i =1;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}

int combination(int n,int r){
    int npr = factorial(n)/(factorial(n-r));
    return npr;
}
int main(){

    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);

    int r;
    printf("Enter the value of n : ");
    scanf("%d",&r);


    int npr = combination(n,r);

    printf("npr : %d",npr);



    return 0;
}