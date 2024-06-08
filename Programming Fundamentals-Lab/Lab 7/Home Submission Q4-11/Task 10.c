#include<stdio.h>
#include<conio.h>
void main (void){

int size,sumneed,sum,i,j,left,right;
size=sumneed=sum=i=j=left=right=0;

printf("Enter the size of the array:\n");
scanf("%d",&size);

int array[size];
printf("Please enter the elements of the array:\n");

for (int i=0; i<size; i++){
    scanf("%d",&array[i]);
}

printf("Now enter the sum needed:\n");
scanf("%d",&sumneed);

for (right=0; right<size; right++){
    sum=sum+array[right];
    while (sum>sumneed){
        sum=sum-array[left];
        left++;
    }


if (sum==sumneed){
    printf("The summed results in the output of %d is by the sum of ",sumneed);
    for (i=left ;i<=right; i++){
        printf("%d",array[i]);
        if(i<right)
            printf(",");
        }
}
printf("\n");
}
if (sum!=sumneed)
    printf("\nThe sum of %d not found",sumneed);
}
