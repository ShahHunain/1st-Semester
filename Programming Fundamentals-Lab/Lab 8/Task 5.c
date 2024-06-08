#include<stdio.h>

void decideCarUsage(int carnumber, int day);

void main(void){
	
int carnumber,day;
carnumber=day=0;
	
	printf("Enter the car number: \n");
	scanf("%d",&carnumber);
	
	printf("Enter the day of the week from 1-7: \n");
	scanf("%d",&day);
	
	decideCarUsage(carnumber, day);
}

void decideCarUsage(carnumber, day){
	if (carnumber%2==0 && day%2==0){
		printf("1\n");
	}
	else if (carnumber%2!=0 && day%2!=0)
	    printf("1\n");
	else 
	    printf("0\n");
}