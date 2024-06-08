#include<stdio.h>
#include<string.h>

struct date{
	int dd;
	int mm;
	int yy;
};

void main(void){
	struct date inputs[2];
	
	int i;
	for(i=0; i<2; i++){
	printf("Enter the %d date in dd-mm-yy:\n",i+1);
	scanf("%d%d%d",&inputs[i].dd,&inputs[i].mm,&inputs[i].yy); 
	}
	
	for(i=0; i<2; i++){
	printf("%d %d %d\n",inputs[i].dd,inputs[i].mm,inputs[i].yy); 
	}
	
for(i=0; i<1; i++){
	if(inputs[i].dd==inputs[i+1].dd){
		if(inputs[i].mm==inputs[i+1].mm){
			if(inputs[i].yy==inputs[i+1].yy){
				printf("The dates are equal\n");
			}
		}
	}
	else{
		printf("The dates are not equal\n");
		}
	}
}