#include<stdio.h>
#include<conio.h>
void main(void){

int numberofshirts,numberofages,numberofprices;
numberofshirts=numberofages=numberofprices=0;

printf("\t23k-3032  SHAH HUNAIN\n\n\n");

printf("Enter the number of shirts: \n");
scanf("%d",&numberofshirts);

int array1[numberofshirts][2];

printf("\n");

for (int i=0; i<numberofshirts; i++){
    printf("Enter the age and price for %d shirt: \n",i+1);
        for (int j=0; j<2; j++){
            scanf("%d",&array1[i][j]);
        }
    }

printf("\n");

int temp;
printf("The Sorted list in ascending order with respect to Age is \n");
for (int i=0; i<numberofshirts; i++){
    for (int j=0; j<numberofshirts-i-1; j++){
        if(array1[j][0]>array1[j+1][0]){
            temp=array1[j][0];
            array1[j][0]=array1[j+1][0];
            array1[j+1][0]=temp;
                }
            }
    }
for (int i=0; i<numberofshirts; i++){
        printf("%d ",array1[i][0]);
    }

printf("\n");

printf("The Sorted list in descending order with respect to Price is \n");
for (int i=0; i<numberofshirts; i++){
            for (int j=0; j<numberofshirts-i-1; j++){
        if(array1[j][1]<array1[j+1][1]){
            temp=array1[j][1];
            array1[j][1]=array1[j+1][1];
            array1[j+1][1]=temp;
                }
            }
    }

for (int i=0; i<numberofshirts; i++){
            printf("%d ",array1[i][1]);
        }

printf("\n");

}
