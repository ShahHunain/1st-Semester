#include<stdio.h>
#include<conio.h>
void main (void){

int weekday,vacation;
weekday=vacation=0;

printf("Please follow the following instruction\n");
printf("\n1 If its a weekday\n0 If its not a weekday\n");
scanf("%d",&weekday);

printf("\nPlease follow the following instruction\n");
printf("\n1 If its a vacation\n0 If its not a vacation\n");
scanf("%d",&vacation);

if (weekday==0 && vacation==0)
    printf("\nTrue....You can sleepin\n");
else if (weekday==1 && vacation==0)
    printf("\nFalse....You cannot sleepin\n");
else if (weekday==0 && vacation==1)
    printf("\nTrue....You can sleepin\n");
else
    printf("\nInvalid Input\n");
}
