#include<stdio.h>
#include<conio.h>
void main (void){
	
int number,firstnumber,secondnumber,nextnumber,sumofnumbers;
sumofnumbers=0;
firstnumber=0, secondnumber=1;

printf("The Fibonacci series=\n");

printf("%d,",firstnumber);

for (int i=1; firstnumber<=10000; i++){
	
	firstnumber=secondnumber;
	secondnumber=nextnumber;
	nextnumber=firstnumber+secondnumber;
	
	printf("%d,",nextnumber);
	
	if (nextnumber%3==0 || nextnumber%5==0 || nextnumber%7==0){
		sumofnumbers=sumofnumbers+nextnumber;
	}
	
}
	
	printf("\nThe sum is %d",sumofnumbers);
	
}