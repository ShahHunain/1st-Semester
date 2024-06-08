#include<stdio.h>
#include<conio.h>
void main (void){

int hours,minutes,seconds;
hours=minutes=seconds;

printf("Enter the integer=\n");
scanf("%d",&seconds);

hours=seconds/3600;
minutes=hours*60;

printf("There are:\nH:M:S-%d:%d:%d\n",hours,minutes,seconds);
}
