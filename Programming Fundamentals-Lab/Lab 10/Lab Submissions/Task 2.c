#include<stdio.h>

void reverse(int *array, int size);

void main(void){
	int i, size;
	
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	
	int array[size];
	
	printf("Now enter the elements of the array:\n");
	for(i=0; i<size; i++){
		scanf("%d",&array[i]);
	}
	
	int *ptr=array;
	for(i=0; i<size; i++){
		printf("%d ",array[i]);
	}
	printf("\n \n");
	reverse(array,size);
	
}

void reverse(int *array, int size){
	int i;
	for(i=size-1; i>=0; i--){
		printf("%d ",array[i]);
	}
}

