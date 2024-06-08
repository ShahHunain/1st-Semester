#include<stdio.h>
#include<conio.h>
void main (void){

int total,userpick,computerpick;
total=21; userpick=computerpick=0;

printf("The total matchsticks are 21\n\n");

while (1){
printf("\nPlease pick 1,2,3 or 4 matchsticks");
scanf("%d",&userpick);

total=total-userpick;
printf("\nThe remaining matchsticks are %d",total);

computerpick=5-userpick;
printf("\nThe remaining match sticks are %d",total-computerpick);
total=total-computerpick;

if (total==1){
    printf("\nYou Lost\n");
    break;
    }
         }
}
