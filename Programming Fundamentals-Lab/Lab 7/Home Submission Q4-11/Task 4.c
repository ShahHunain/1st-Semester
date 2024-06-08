#include<stdio.h>
#include<conio.h>
void main (void){

int rows1,columns1;

printf("Enter the number of rows and numbers of columns of the matrix\n");
scanf("%d %d",&rows1,&columns1);

int m1[rows1][columns1];

printf("Now enter the elements of the matrix:\n");
for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
        scanf("%d",&m1[i][j]);
    }
}
printf("The matrix is:\n");
for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
        printf("%d\t",m1[i][j]);
    }
    printf("\n");
}
int rows2,columns2;
rows2=columns1, columns2=rows1;

int m2[rows2][columns2];


for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
        m2[i][j]=m1[j][i];
        }
  }


printf("The transpose of the matrix is:\n");
for (int i=0; i<columns1; i++){
    for (int j=0; j<rows1; j++){
        printf("%d\t",m2[i][j]);
    }
    printf("\n");
}

for (int i=0; i<rows1; i++){
    for (int j=0; j<columns1; j++){
    if ( m2[i][j] == m1[i][j] ){
        printf("The Matrix is symmetric\n");
        break;
    }
    else{
        printf("The Matrix is not symmetric\n");
         break;
         }

    }
  }

}
