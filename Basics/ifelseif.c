#include<stdio.h>
int main(){

    int a;
    printf("enter your age : ");
    scanf("%d",&a);

    printf("you have enterd %d as your age\n",a);

    if(a>=18){

        printf("you can vote");

    }

    else if(a<=5){

        printf("you can vote for infants");

    }

    else{

        printf("fuck off");

    }

    return 0;
}