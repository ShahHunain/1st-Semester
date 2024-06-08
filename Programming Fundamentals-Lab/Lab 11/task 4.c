#include<stdio.h>
#include<string.h>

struct date{
	char name[20];
	int salary;
	int work_hour;
};

void main(void){
	struct date var[10];
	
	int i;
	
	for(i=0; i<10; i++){
		printf("\n%d",i+1);
		printf("\nEnter the name:\n");
		fflush(stdin);
		gets(var[i].name);
		printf("Enter the salary:\n");
		scanf("%d",&var[i].salary);
		printf("Enter the hours of work:\n");
		scanf("%d",&var[i].work_hour);
	}
	
	for(i=0; i<10; i++){
		if((var[i].work_hour)>=8 && (var[i].work_hour)<10){
			var[i].salary=var[i].salary+50;
		}
		if((var[i].work_hour)>=10 && (var[i].work_hour)<12){
			var[i].salary=var[i].salary+100;
		}
		if((var[i].work_hour)>=12){
			var[i].salary=var[i].salary+150;
		}
	}
	
	for(i=0; i<10; i++){
		printf("\n%d",i+1);
		printf("\nThe name is:");
		puts(var[i].name);
		printf("The salary is:");
		printf("%d\n",var[i].salary);
	}
	
}