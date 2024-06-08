#include<stdio.h>
#include<stdlib.h>
int main(void){

int rows=0,columns=0,i=0,j=0,sum=0;
printf("Enter the number of rows:\n");
scanf("%d",&rows);

printf("Enter the number of columns:\n");
scanf("%d",&columns);

int **array=(int **)malloc(rows*sizeof(int));
for (i=0; i<rows; i++){
    *(array+i)=(int *)malloc(columns*sizeof(int));
}

printf("Now enter the elements of the array:\n");
for (i=0; i<rows; i++){
    for (j=0; j<columns; j++){
        scanf("%d",(*(array+i)+j));
    }
}
printf("\n\n");
for (i=0; i<rows; i++){
    sum=0;
    for (j=0; j<columns; j++){
        sum=sum+*(*(array+i)+j);
    }
    printf("The sum of %d row is %d\n",i+1,sum);
}
printf("\n\n");
for (i=0; i<columns; i++){
    sum=0;
    for (j=0; j<rows; j++){
        sum=sum+*(*(array+j)+i);
    }
    printf("The sum of %d column is %d\n",i+1,sum);
}
for (i=0; i<rows; i++) {
        free(array[i]);
    }
    free(array);
}
