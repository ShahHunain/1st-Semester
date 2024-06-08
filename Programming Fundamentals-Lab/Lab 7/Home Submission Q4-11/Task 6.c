#include<stdio.h>
#include<conio.h>
void main(void){
    int size,i,j,frequency;

    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements of the array:\n");
    for (i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    for (i=0; i<size; i++){
        if (a[i]!=0){
            frequency=1;
            for(j=i+1; j<size; j++){
                if (a[i]==a[j]){
                    frequency++;
                    a[j]=0;
                }
            }
            printf("The frequency of %d is %d\n",a[i],frequency++);
        }
    }
}
