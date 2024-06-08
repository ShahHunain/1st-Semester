#include<stdio.h>
#include<conio.h>
void main (void){

float weight1,weight2,numberof1st,numberof2nd,avgvalue,totalitems,finalavgvalue;
weight1=weight2=numberof1st=numberof2nd=avgvalue=totalitems=finalavgvalue=0;

printf("Enter the weight of 1st item\n");
scanf("%f", &weight1);

printf("Enter the number of 1st item\n");
scanf("%f", &numberof1st);

printf("Enter the weight of 2nd item\n");
scanf("%f", &weight2);

printf("Enter the weight of 1st item\n");
scanf("%f", &numberof2nd);

totalitems=numberof1st+numberof2nd;

avgvalue=numberof1st*weight1+numberof2nd*weight2;
finalavgvalue=avgvalue/totalitems;

printf("Average Value= %.6f",finalavgvalue);
}
