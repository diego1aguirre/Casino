#include<stdio.h>

int rules();
int round1();

int main(){
    rules();
    printf("\n\n");
    
    round1();
    return 0;
}

int round1(){
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("\n\n");

    int deposit;
    printf("Enter the amount: ");
}