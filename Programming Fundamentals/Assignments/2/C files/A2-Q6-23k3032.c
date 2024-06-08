#include<stdio.h>
#include<conio.h>
void main(void){

int size,t;
size=t=0;
 printf("\t 23k-3032  SHAH HUNAIN\n\n\n");
printf("Please enter the size of the array: \n");
scanf("%d",&size);

int arrayN[size];

printf("Now enter the elements of the array: \n");
for (int i=0; i<size; i++){
    scanf("%d",&arrayN[i]);
}

printf("Now enter the target sum: \n");
scanf("%d",&t);

for (int i=0; i<size; i++){
    for (int j=i+1; j<size; j++){
        if((arrayN[i]+arrayN[j])==t){
            printf("%d , %d    ",arrayN[i],arrayN[j]);
        }
    }
}

}
