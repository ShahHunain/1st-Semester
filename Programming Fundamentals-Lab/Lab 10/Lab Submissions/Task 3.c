#include<stdio.h>

void main (void){
	//adding to pointers of different types works differently because *ptr=iterator+(sizeofdatatype)
	
	int N1=0,N2=0,N3=0,i=0;
	
	printf("Enter the size:\n");
	scanf("%d",&N1);
	
	char array1[N1];
	
	printf("Enter the values of array of character type:\n");
	for(i=0; i<N1; i++){
		scanf(" %c",&array1[i]);
	}
	
	printf("Enter the size:\n");
	scanf("%d",&N2);
	
	int array2[N2];
	
	printf("Enter the values of array of integer type:\n");
	for(i=0; i<N2; i++){
		scanf("%d",&array2[i]);
	}
		
	printf("Enter the size:\n");
	scanf("%d",&N3);
	
	long long int array3[N3];
	
	printf("Enter the values of array of long long integer type:\n");
	for(i=0; i<N3; i++){
		scanf("%lli",&array3[i]);
	}
	
	char *ptr1=array1;
	int *ptr2=array2;
	long long int *ptr3=array3;
	
	for (i=0; i<N1; i++){	
	printf("%p , %c \n",ptr1,*ptr1);
	ptr1++;
	}		
	printf("\n\n");
	for (i=0; i<N2; i++){	
	printf("%p , %d \n",ptr2,*ptr2);
	ptr2++;
	}
	
	printf("\n\n");
	for (i=0; i<N3; i++){	
	printf("%p , %lli \n",ptr3,*ptr3);
	ptr3++;
	}
}