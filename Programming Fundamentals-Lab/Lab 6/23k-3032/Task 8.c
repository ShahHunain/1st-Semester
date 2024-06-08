#include<stdio.h>
#include<conio.h>
void main (void){

int size, numbers[100];

printf("Please enter the size of the array\n");
scanf("%d",&size);

printf("Now enter the numbers\n");
for(int i=0; i<size; i++){
    scanf("%d",&numbers[i]);
}
for (int i=size-1; i>=0 ;i--){
    printf("\n%d",numbers[i]);
}
}
