#include<stdio.h>

int fib(int n);

void main(void){

int n;

printf("Enter the number of terms you want to print for fibonacci series:");
scanf("%d",&n);

printf("%d",fib(n-1));
}

int fib(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
