#include<stdio.h>

double factorial(int num);

void main (void){
	int num; 
	double fact;
	num=0 ;
		
	printf("Enter the number to find its factorial: \n");
	scanf("%d",&num);
	
	fact = factorial(num);
	
	printf("%lf",fact);
	
}

 double factorial(int num){
 	
	if (num>=1)
		return  num* factorial(num-1);
	
	else 
		return 1;
	
	
}