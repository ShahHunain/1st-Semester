#include<stdio.h>

void myFunction(int num1, int num2);

void main (void){
	int num1,num2;
	num1=num2=0;
	
	printf("You have to input two numbers\n");
	printf("Enter the 1st Number: \n");
	scanf("%d",&num1);
	printf("Enter the 2nd Number: \n");
	scanf("%d",&num2);
	
	myFunction(num1,num2);
}
void myFunction(int num1, int num2){
	int temp=0;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("The swapped numbers are %d and %d",num1,num2);
}
