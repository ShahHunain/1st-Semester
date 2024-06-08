#include<stdio.h>
#include<conio.h>
void main (void){
	
	int number1,number2,answer,count;
	number1=number2=answer=count=0;
	
	printf("Enter the first number\n");
	scanf("%d",&number1);
	
	printf("Enter the second number\n");
	scanf("%d",&number2);
	
	if(number1>number2){
	while(number1>=number2){
	answer=number1-number2;
	number1=answer;
	count=count+1;
}
printf("The answer is %d",count);
}

else 
printf("Division is not possible\n");
}