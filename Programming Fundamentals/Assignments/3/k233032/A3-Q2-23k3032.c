#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct attributes{
	char name[20];
	char role[10];
	int communication;
	int teamwork;
	int creativity;
};

void main(void){

	printf("................................................\n");
    printf("Roll Number: 23K-3032\t\tName:Shah Hunain\n");
    printf("................................................\n");

	struct attributes HR[5], finance[5], Marketing[5], logistics[5];

	char r1[5][10]={"Director","Executive","Manager","Employee","Trainee"};
	char r2[5][10]={"Director","Executive","Manager","Employee","Trainee"};
	char r3[5][10]={"Director","Executive","Manager","Employee","Trainee"};
	char r4[5][10]={"Director","Executive","Manager","Employee","Trainee"};

	char names[20][10] = {"Roman","Reigns","Seth","Freakin","Rollins","Dean","Ambrose","Kevin","Owens","Randy","Brock","Lesnar","Dominik","Sami","Drew","Mcintyre","Finn","Balor","CM","Punk"};
	char zero[]={'\0'};

	srand(time(NULL));

	int i,n;
	for(i=0;i<5;i++){
		n=rand() % 20;
		if(strcmp(names[n],zero)!=0){
			strcpy(HR[i].name,names[n]);
			strcpy(names[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 20;
		if(strcmp(names[n],zero)!=0){
			strcpy(finance[i].name,names[n]);
			strcpy(names[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 20;
		if(strcmp(names[n],zero)!=0){
			strcpy(Marketing[i].name,names[n]);
			strcpy(names[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 20;
		if(strcmp(names[n],zero)!=0){
			strcpy(logistics[i].name,names[n]);
			strcpy(names[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 5;
		if(strcmp(r1[n],zero)==1){
			strcpy(HR[i].role,r1[n]);
			strcpy(r1[n],zero);
		}
	}

	for(i=0; i<5; i++){
		n=rand() % 5;
		if(strcmp(r2[n],zero)==1){
			strcpy(finance[i].role,r2[n]);
			strcpy(r2[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 5;
		if(strcmp(r3[n],zero)==1){
			strcpy(Marketing[i].role,r3[n]);
			strcpy(r3[n],zero);
		}
	}
	for(i=0; i<5; i++){
		n=rand() % 5;
		if(strcmp(r4[n],zero)==1){
			strcpy(logistics[i].role,r4[n]);
			strcpy(r4[n],zero);
		}
	}
	for(i=0; i<5; i++){
		HR[i].communication=rand() % 100 +1;
		HR[i].teamwork=rand() % 100+1;
		HR[i].creativity=rand() % 100+1;
	}
	for(i=0; i<5; i++){
		finance[i].communication=rand() % 100 +1;
		finance[i].teamwork=rand() % 100 +1;
		finance[i].creativity=rand() % 100 +1;
	}
	for(i=0; i<5; i++){
		Marketing[i].communication=rand() % 100 +1;
		Marketing[i].teamwork=rand() % 100 +1;
		Marketing[i].creativity=rand() % 100 +1;
	}
	for(i=0; i<5; i++){
		logistics[i].communication=rand() % 100 +1;
		logistics[i].teamwork=rand() % 100 +1;
		logistics[i].creativity=rand() % 100 +1;
	}

	int sums[4]={0}, s1=0;

	for(i=0; i<5; i++){
		sums[0]=sums[0]+HR[i].communication;
		sums[0]=sums[0]+HR[i].teamwork;
		sums[0]=sums[0]+HR[i].creativity;
	}
	for(i=0; i<5; i++){
		sums[1]=sums[1]+finance[i].communication;
		sums[1]=sums[1]+finance[i].teamwork;
		sums[1]=sums[1]+finance[i].creativity;
	}
	for(i=0; i<5; i++){
		sums[2]=sums[2]+Marketing[i].communication;
		sums[2]=sums[2]+Marketing[i].teamwork;
		sums[2]=sums[2]+Marketing[i].creativity;
	}
	for(i=0; i<5; i++){
		sums[3]=sums[3]+logistics[i].communication;
		sums[3]=sums[3]+logistics[i].teamwork;
		sums[3]=sums[3]+logistics[i].creativity;
	}
	for(i=0; i<4; i++){
		if(sums[i]>s1){
			s1=sums[i];
		}
	}
	if(s1==sums[0]){
		printf("The Best Department is HR :\n");
		for(i=0; i<5; i++){
			printf("\nName : %s", HR[i].name);
			printf("\nRole : %s", HR[i].role);
			printf("\nCommunication : %d", HR[i].communication);
			printf("\nCreativity : %d", HR[i].creativity);
			printf("\nTeamwork : %d", HR[i].teamwork);
			printf("\n");
		}
	}
	else if(s1==sums[1]){
		printf("\nThe Best Department is Finance :\n");
		for(i=0; i<5; i++){
			printf("\nName : %s", finance[i].name);
			printf("\nRole : %s", finance[i].role);
			printf("\nCommunication : %d", finance[i].communication);
			printf("\nCreativity : %d", finance[i].creativity);
			printf("\nTeamwork : %d", finance[i].teamwork);
			printf("\n");
		}
	}
	else if(s1==sums[2]){
		printf("\nThe Best Department is Marketing :\n");
		for(i=0; i<5; i++){
			printf("\nName : %s", Marketing[i].name);
			printf("\nRole : %s", Marketing[i].role);
			printf("\nCommunication : %d", Marketing[i].communication);
			printf("\nCreativity : %d", Marketing[i].creativity);
			printf("\nTeamwork : %d", Marketing[i].teamwork);
			printf("\n");
		}
	}
	else if(s1==sums[3]){
		printf("\nThe Best Department is Logistics :\n");
		for(i=0; i<5; i++){
			printf("\nName : %s", logistics[i].name);
			printf("\nRole : %s", logistics[i].role);
			printf("\nCommunication : %d", logistics[i].communication);
			printf("\nCreativity : %d", logistics[i].creativity);
			printf("\nTeamwork : %d", logistics[i].teamwork);
			printf("\n");
		}
	}
}
