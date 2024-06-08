#include<stdio.h>
#include<conio.h>
void main (void){

int numbers[100];
int size,sum;
size=sum=0;

printf("Please enter the size of the array you want\n");
scanf("%d",&size);

printf("Now enter the number you want\n");
for(int i=0; i<size ;i++){
    scanf("%d",&numbers[i]);
}
for (int i=0; i<=size ;i++){
    sum=sum+i;
}
printf("The sum of the entered numbers is %d",sum);
}
