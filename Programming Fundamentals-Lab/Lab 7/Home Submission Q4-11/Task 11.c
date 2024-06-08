#include<stdio.h>
#include<conio.h>
void main (void){

int inputarray[4][4], newarray1[3][3], newarray2[3][3], newarray3[3][3], newarray4[3][3];

printf("Enter the elements of the 4-by-4 matrix\n");
for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
        scanf("%d",&inputarray[i][j]);
    }
}
printf("\nThe input 4-by-4 matrix is:\n");
for (int i=0; i<4; i++){
    for (int j=0; j<4; j++){
        printf("%d\t",inputarray[i][j]);
    }
    printf("\n");
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        newarray1[i][j]=inputarray[i][j];
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        newarray2[i][j]=inputarray[i][j+1];
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        newarray3[i][j]=inputarray[i+1][j];
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        newarray4[i][j]=inputarray[i+1][j+1];
    }
}

printf("\nThe first 3-by-3 Matrix is:\n");
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("%d\t",newarray1[i][j]);
    }
    printf("\n");
}

printf("\nThe second 3-by-3 Matrix is:\n");
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("%d\t",newarray2[i][j]);
    }
    printf("\n");
}

printf("\nThe third 3-by-3 Matrix is:\n");
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("%d\t",newarray3[i][j]);
    }
    printf("\n");
}

printf("\nThe fourth 3-by-3 Matrix is:\n");
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        printf("%d\t",newarray4[i][j]);
    }
    printf("\n");
}

int max1,max2,max3,max4;
max1=newarray1[0][0], max2=newarray2[0][0], max3=newarray3[0][0], max4=newarray4[0][0];

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        if (max1<newarray1[i][j]){
                max1=newarray1[i][j];
        }
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        if (max2<newarray2[i][j]){
                max2=newarray2[i][j];
        }
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        if (max3<newarray3[i][j]){
                max3=newarray3[i][j];
        }
    }
}

for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        if (max4<newarray4[i][j]){
                max4=newarray4[i][j];
        }
    }
}

int finalarray[2][2]={{max1,max2},{max3,max4}};


printf("\nThe final output is\n");
for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        printf("%d\t",finalarray[i][j]);
    }
    printf("\n");
}
}
