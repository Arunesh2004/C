#include<stdio.h>
int main(){

    int n;
    printf("enter a number between 1 to 7 to know the day : ");
    scanf("%d",&n);

    switch(n){

        case 1:
        printf("today is monday");
        break;

        case 2:
        printf("today is tuesday");
        break;

        case 3:
        printf("today is wednesday");
        break;

        case 4:
        printf("today is thursday");
        break;

        case 5:
        printf("today is friday");
        break;

        case 6:
        printf("today is saturday");
        break;

        case 7:
        printf("today is sunday");
        break;
    }

    return 0;
}