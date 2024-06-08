#include<stdio.h>
#include<conio.h>
void main (void){

int number,d1,temporary,newnumber;

printf("Enter a '5' five digit number to check its divisibility by 7\n");
scanf("%d",&number);

d1=number%10;
temporary=number/10;
newnumber=temporary-2*d1;

d1=newnumber%10;
newnumber=newnumber/10;
newnumber=newnumber-2*d1;

d1=newnumber%10;
newnumber=newnumber/10;
newnumber=newnumber-2*d1;

if ((newnumber==-7)||(newnumber==0)||(newnumber==7)){
    printf("The number is divisible by 7\n");
    }
else
    printf("The number is not divisible by 7\n");
}
