#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(void){
    int rows=0,columns=0,i=0,j=0;
    char choice;

while(choice!='N'){
    printf("Enter the number of rows:\n");
    scanf("%d",&rows);
    printf("Enter the number of columns:\n");
    scanf("%d",&columns);

    int **array=(int **)malloc(rows*sizeof(int *));
    for(i=0; i<rows; i++){
        array[i]=(int *)malloc(columns*sizeof(int));
    }

    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
          *(*array+i * columns+j)=rand()%401-200;
        }
    }

    for (i=0; i<rows; i++){
        int minimum=*(*array+i * columns);
        int maximum=*(*array+i * columns);

        for (j=1; j<columns; j++){
            if(*(*array+i * columns+j)<minimum){
                minimum=*(*array+i * columns+j);
            } else if(*(*array+i * columns+j)>maximum){
                maximum=*(*array+i * columns+j);
            }
        }

        for (j=0; j<columns; j++) {
            if(*(*array+i * columns+j)>0){
                *(*array+i * columns+j)=minimum;
            } else if(*(*array+i * columns+j)<0){
                *(*array+i * columns+j)=maximum;
            }
        }
    }

printf("Modified Array is:\n");
    for(i=0; i<rows; i++) {
        for(j=0; j<columns; j++) {
            printf("%d\t",*(*(array+i)+j));
        }
        printf("\n");
    }


    for (i=0; i<rows; i++) {
        free(*(array+i));
    }
    free(array);

    printf("Do you want to continue? Y=Yes\tN=No:\n");
    choice=getche();
    printf("\n");
    }

}


