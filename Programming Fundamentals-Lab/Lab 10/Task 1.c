#include<stdio.h>
#include<stdlib.h>
int main(void){

int numofelements=0,i=0,sum=0;
printf("Enter the number of elements of the array:\n");
scanf("%d",&numofelements);

int *ptr=(int*)malloc(numofelements*sizeof(int));

if (ptr == NULL){
    printf("\nMemory allocation failed\n");
}
else{
printf("Enter the elements of the array:\n");
for (i=0; i<numofelements; i++){
    scanf("%d",ptr+i);
    sum=sum+*(ptr+i);
}
printf("\n\nThe sum of the elements is %d",sum);

free(ptr);

}
}
