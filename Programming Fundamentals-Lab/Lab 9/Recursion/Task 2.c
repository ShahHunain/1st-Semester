#include<stdio.h>

// without using multiplication operator and loops. Use recursion and addition only.
int multiplication(int num1 , int num2);

void main (void){
	int num1=0, num2=0, multiply;

	printf("Enter the two numbers: \n");
	scanf("%d %d",&num1,&num2);

    if (num1<0 || num2<0){
    	printf("You have entered negative numbers \n");
	}
	else if (num1>0 && num2>0){
		printf("\nThe multiplication of the input numbers is %d",multiplication(num1,num2));
	}
}

int multiplication(int num1, int num2){
	if (num2>0){
		return num1+multiplication(num1,num2-1);
	}
	else
	return 0;
}
