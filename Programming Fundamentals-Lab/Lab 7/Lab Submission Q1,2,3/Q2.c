#include<stdio.h>
#include<conio.h>
void main (void){

int size,d,temp;
size=d=0;

printf("Please enter the size of array\n");
scanf("%d",&size);

int array[size];

printf("Please enter the numbers\n");

for(int i=0; i<size ; i++){
	scanf("%d",&array[i]);
}

printf("Now please enter the rotation\n");
scanf("%d",&d);

for (int j=0 ; j<d; j++){
	temp=array[0];
for (int i=0; i<size; i++){
	array[i]=array[i+1];
}
array[size-1]=temp;
}

for (int i=0; i<size; i++){
	printf("%d",array[i]);
}

}
