#include<stdio.h>
#include<conio.h>
void main (void){

int number,sumofdigits;
number=sumofdigits=0;

printf("Enter the number\n");
scanf("%d",&number);

while (number!=0){
	sumofdigits=sumofdigits+number%10;
	number=number/10;
}
printf("The Sum of the digits of the number is %d",sumofdigits);

}