#include<stdio.h>

void processArray(int sum, int minimum, int maximum, int size, int array[]);

void main(void){

	int size,sum,maximum,minimum;
	size=sum=0;

	printf("Enter the size of the array: \n");
	scanf("%d",&size);

	int array[size];

	printf("Enter the elements of the array: \n");
	for (int i=0; i<size; i++){
		scanf("%d",&array[i]);
	}

	maximum=array[0];
	minimum=array[0];

	processArray(sum, minimum, maximum, size, array);
}

void processArray(int sum, int minimum, int maximum, int size, int array[]){

	for (int i=0; i<size; i++){
		sum=sum+array[i];
	}
	printf("The sum of the elements of the array is: %d\n",sum);

	for (int i=0; i<size; i++){
	if (maximum<array[i]){
		maximum=array[i];
	}
	}
	printf("The maximum element in the array is: %d\n",maximum);

	for (int i=0; i<size; i++){
	if (minimum>array[i]){
		minimum=array[i];
	}
	}
	printf("The minimum element in the array is: %d\n",minimum);
}
