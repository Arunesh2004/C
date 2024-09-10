#include<stdio.h>
int main(){

    int m1;
    printf("enter your marks in science : ");
    scanf("%d",&m1);

    int m2;
    printf("enter your marks in maths : ");
    scanf("%d",&m2);

    int avg;
    avg = (m1 + m2)/2;

    if(avg>=33&&m1>=33&&m2>=33){

        printf("you have passed in both the tests\nyou have won 45 rupees");

    }
    else if(m1>=33&&m2<=33){

        printf("you have passed in science\nyou have won 15 rupees");

    }
    else if(m1<=33&&m2>=33){

        printf("you have passed in maths\nyou have won 15 rupees");

    }

    else {

        printf("you have failed in both subjects\nwork hard");
        
    }

    return 0;

   
}