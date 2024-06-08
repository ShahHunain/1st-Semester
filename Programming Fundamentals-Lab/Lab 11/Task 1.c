#include<stdio.h>
#include<string.h>

struct data{
	char roll_number[7];
	char name[20];
	char dept[10];
	char course[20];
	int year_join;
};

void main(void){
	struct data students_data[450];
	int size=0;
	printf("Please enter the size:\n");
	scanf("%d",&size);
	
	int i;
	for(i=0; i<size; i++){
		fflush(stdin);
		printf("Enter the ROLL NUMBER:\n");
		gets(students_data[i].roll_number);
		printf("Enter the name:\n");
		gets(students_data[i].name);
		printf("Enter the name of department:\n");
		gets(students_data[i].dept);
		printf("Enter the name of course:\n");
		gets(students_data[i].course);
		printf("Enter the year of joining\n");
		scanf("%d",&students_data[i].year_join);
	}
	/*for(i=0; i<size; i++){
		puts(students_data[i].roll_number);
		puts(students_data[i].name);
		puts(students_data[i].dept);
		puts(students_data[i].course);
		printf("%d",students_data[i].year_join);
	}*/
	
	char search[7];
	
	printf("Enter the roll number to search for the candiddate:\n");
	fflush(stdin);
	gets(search);
	
	int val;
	
	for(i=0; i<size; i++){
		val=strcmp(students_data[i].roll_number,search);
		if(val==0){
		puts(students_data[i].roll_number);
		puts(students_data[i].name);
		puts(students_data[i].dept);
		puts(students_data[i].course);
		printf("%d",students_data[i].year_join);
		}
	}
	int year;
	
	printf("\nEnter the year to search:\n");
	scanf("%d",&year);
	for(i=0; i<size; i++){
		if(students_data[i].year_join==year){
		puts(students_data[i].roll_number);
		puts(students_data[i].name);
		puts(students_data[i].dept);
		puts(students_data[i].course);
		printf("\n%d\n\n",students_data[i].year_join);
		}
	}
	
	
	
}