#include<stdio.h>
#include<conio.h>
void main (void){
	
int num1,num2,lcm,gcd;
num1=num2=lcm=gcd=0;

printf("Enter the two numbers = \n");
scanf("%d %d",&num1,&num2);
	
for (int i=1; i<=num1 && i<=num2; i++){
	
	if (num1%i==0 && num2%i==0)
	gcd=i;
}
	printf("The gcd of the numbers %d and %d is %d\n",num1,num2,gcd);
	
	lcm=(num1*num2)/gcd;
	printf("The lcm of the numbers %d and %d is %d",num1,num2,lcm);
}