#include <stdio.h>
#include<conio.h>
void main(void) {
    int X, Y;

    printf("Enter the number of branches: ");
    scanf("%d", &X);

    printf("Enter the number of mobile phones per branch: ");
    scanf("%d", &Y);

    int bill[X][Y];

    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            printf("Enter bill amount for Branch %d, Mobile Phone %d: ", i + 1, j + 1);
            scanf("%d", &bill[i][j]);
        }
    }

    int totalbranch[X],totalbill, maxbillofbranch, maxbillofphone,maxbill;
    totalbill=maxbillofbranch=maxbillofphone=maxbill=0;

    for (int i = 0; i < X; i++) {
        totalbranch[i] = 0;
        for (int j = 0; j < Y; j++) {
            totalbill += bill[i][j];
            totalbranch[i] += bill[i][j];
            if (bill[i][j] > maxbill) {
                maxbill = bill[i][j];
                maxbillofbranch = i;
                maxbillofphone = j;
            }
        }
    }

    printf("\nThe total bill for all branches is %d\n", totalbill);

    for (int i = 0; i < X; i++) {
        printf("The total bill for branch %d is %d\n", i + 1, totalbranch[i]);
    }

    printf("The branch with the highest bill is %d\n", maxbillofbranch + 1);
    printf("The mobile phone id with maximum bill is %d\n", maxbillofphone + 1);

}
