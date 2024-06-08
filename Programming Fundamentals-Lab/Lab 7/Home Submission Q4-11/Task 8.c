#include<stdio.h>
#include<conio.h>
void main (void){

int size,temp;
size=temp=0;

printf("Enter the size of the array\n");
scanf("%d",&size);

int array[size];
printf("Now enter the elements of the array\n");
for (int i=0; i<size; i++){
    scanf("%d",&array[i]);
    }
for (int j=0; j<size; j++){
    for (int i=j+1; i<size; i++){
        if (array[j]>array[i]){
            temp=array[j];
            array[j]=array[i];
            array[i]=temp;
        }
    }
    printf("%d ",array[j]);

}

}
