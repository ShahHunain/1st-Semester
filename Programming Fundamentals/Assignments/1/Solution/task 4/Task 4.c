#include<stdio.h>
#include<conio.h>
void main(void){

int num,i;

printf("Enter the number:");
scanf("%d",&num);

for(i=8;i>=0;i--){
    printf("%d",(num>>i)&1);
}
}
