#include<stdio.h>
int main(){

    int age;
    printf("enter your age is less than : ");
    scanf("%d",&age);

    switch (age)
    {
    case 18:
        printf("you can open a minor account");
        break;
    
    case 60:
        printf("you can open a major account");
        break;

    case 80:
        printf("you can open a pention account");
        break;


    }

    return 0;
}