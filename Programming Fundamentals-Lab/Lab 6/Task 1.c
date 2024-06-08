#include<stdio.h>
#include<conio.h>
int main (){
	
	int num,factor,sum;
	num=0; factor=0; sum=0;
	
	printf("Enter the number=\n");
	scanf("%d",&num);
	
	for(int i=1; i<num; i++){
		
		if (num%i==0){
			sum=sum+i;
		}
		
	}
	
	if(sum==num){
		printf("The number %d is a perfect number\n",num);
	} else
	    printf("The number %d is not a perfect number\n",num);

return 0;
}
