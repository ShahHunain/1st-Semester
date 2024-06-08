#include<stdio.h>
#include<conio.h>
void main (void){

int rows1,columns1,rows2,columns2,sum;
rows1=columns1=rows2=columns2=sum=0;

printf("Enter the number of rows and number of columns of 1st Matrix\n");
scanf("%d %d",&rows1,&columns1);

int m1[rows1][columns1];

printf("Enter the elements of 1st Matrix\n");
for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
        scanf("%d",&m1[i][j]);
    }
}
printf("Now enter the number of rows and number of columns of 2nd Matrix\n");
scanf("%d %d",&rows2,&columns2);

int m2[rows2][columns2];

if(columns1==rows2){
    printf("Now enter the elements of 2nd Matrix\n");
for (int i=0; i<rows2; i++){
    for (int j=0; j<columns2; j++){
        scanf("%d",&m2[i][j]);
    }
}
printf("The 1st matrix is:\n");
for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
        printf("%d\t",m1[i][j]);
    }
    printf("\n");
}
printf("The 2nd matrix is:\n");
for (int i=0; i<rows2; i++){
    for (int j=0; j<columns2; j++){
        printf("%d\t",m2[i][j]);
    }
    printf("\n");
}
int m3[rows1][columns2];

for (int i=0; i<rows1; i++){
    for (int j=0; j<columns2 ;j++){
         sum=0;
        for (int k=0; k<rows1; k++){
         sum=sum+m1[i][k]*m2[k][j];
        }
    m3[i][j]=sum;
    }
}

printf("The Multiplication of the matrix is:\n");
for (int i=0; i<rows1; i++){
    for (int j=0; j<columns2; j++){
        printf("%d\t",m3[i][j]);
    }
    printf("\n");
}

}
else{
    printf("The multiplication is not possible\n");

}
}
