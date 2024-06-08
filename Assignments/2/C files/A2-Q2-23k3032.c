#include<stdio.h>
#include<conio.h>
void main(void){

int rows,columns,i,j,max_square_size,max_square_row,max_square_column,x,y;
rows=columns=i=j=max_square_size=max_square_row=max_square_column=x=y=0;

printf("\t 23k-3032  SHAH HUNAIN\n\n\n");

printf("Enter the number of rows: \n");
scanf("%d",&rows);

printf("Enter the number of columns: \n");
scanf("%d",&columns);


int array[rows][columns];

printf("Input binary matrix '0's' and '1's' : \n");
for (i=0; i<rows; i++){
    for (j=0; j<columns; j++){
        scanf("%d",&array[i][j]);
    }
}

printf("\n");
printf("Your input matrix is: \n");
for (i=0; i<rows; i++){
    for (j=0; j<columns; j++){
        printf("%d\t",array[i][j]);
    }
    printf("\n");
}

printf("\n");

for (i=0; i<rows; i++) {
        for (j=0; j<columns; j++) {
            if (array[i][j] == 1) {
                int square_size = 1;
                int is_square = 1;

                while (i+square_size<rows && j+square_size<columns) {
                    for (x=i; x<=i+square_size; x++) {
                        if (array[x][j+square_size] == 0) {
                            is_square=0;
                            break;
                        }
                    }
                    for (y=j; y<=j+square_size; y++) {
                        if (array[i+square_size][y] == 0) {
                            is_square=0;
                            break;
                        }
                    }

                    if (is_square) {
                        square_size++;
                    } else {
                        break;
                    }
                }

                if (square_size>max_square_size) {
                    max_square_size=square_size;
                    max_square_row=i;
                    max_square_column=j;
                }
            }
        }
    }

    printf("\nThe largest square sub-matrix of 1's is:\n");

    for (i=max_square_row; i<max_square_row+max_square_size; i++) {
        for (j=max_square_column; j<max_square_column+max_square_size; j++) {
            printf("1\t");
        }
        printf("\n");
    }

    printf("\nThe dimension of the largest square sub-matrix is (%d x %d)\n", max_square_size, max_square_size);

}
