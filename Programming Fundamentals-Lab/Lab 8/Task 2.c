#include<stdio.h>

void ADDITION (int num1, int num2);
void SUBTRACTION (int num1, int num2);
void MULTIPLICATION (int num1, int num2);
void DIVISION (int num1, int num2);

void main (void){

char choice;
int num1, num2,answer;
num1=num2=answer=0;

printf("You have to enter two numbers: \n");

printf("Enter the first number: \n");
scanf("%d",&num1);	

printf("Enter the second number: \n");
scanf("%d",&num2);	

printf("What do you want to perform? A=Addition  S=Subtraction  M=Multiplication  D=Division");
choice=getche();

if (choice=='A'){
	ADDITION(num1,num2);
	
}
else if(choice=='S'){
	SUBTRACTION(num1, num2);
	
}
else if(choice=='M'){
	MULTIPLICATION(num1, num2);
	
}
else if(choice=='D'){
	DIVISION(num1, num2);
	
}

}

void ADDITION(int num1, int num2){
	int answer=num1+num2;
	printf("\nThe sum of the two numbers %d and %d is %d\n",num1,num2,answer);
}
	
void SUBTRACTION(int num1, int num2){
	int answer=num1-num2;
	printf("\nThe subtraction of the two numbers %d and %d is %d\n",num1,num2,answer);
}
	
void MULTIPLICATION(int num1, int num2){
	int answer=num1*num2;
	printf("\nThe multiplication of the two numbers %d and %d is %d\n",num1,num2,answer);
}
	
void DIVISION(int num1, int num2){
	int answer=num1/num2;
	printf("\nThe division of the two numbers %d and %d is %d\n",num1,num2,answer);
}

	
