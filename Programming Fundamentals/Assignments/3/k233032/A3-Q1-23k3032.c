#include<stdio.h>
void matrice_2by2();
void matrice_4by4();
void matrice_8by8();
char max1(int n, char matrix[n][n], int r, int c);

void main(void){

    printf("................................................\n");
    printf("Roll Number: 23K-3032\t\tName:Shah Hunain\n");
    printf("................................................\n\n");

do{
char choice;

printf("\t\tWelcome\nPlease choose from the following:\n");
printf("1. Enter values\n2.Enter roll number\n3. Exit: \n");
char option;
fflush(stdin);
option=getchar();

if(option=='1'){
printf("1) 2-by-2 matrice\n2) 4-by-4 matrice\n3) 8-by-8 matrice\n");
printf("Choice:");
fflush(stdin);
choice=getchar();
printf("\n");
switch(choice){
case '1':
    matrice_2by2();
    break;
case '2':
    matrice_4by4();
    break;
case '3':
    matrice_8by8();
    break;
default:
    printf("INVALID INPUT\n");
}
}
if(option=='2'){
        int n=4;
    char roll_number[8];
    printf("Enter the roll number: ");
    fflush(stdin);
    gets(roll_number);
    char number[4];
        number[0]=roll_number[4];
		number[1]=roll_number[5];
		number[2]=roll_number[6];
		number[3]=roll_number[7];
		char matrix[n][n];
		char result[n/2][n/2];
		int i, j;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				matrix[i][j]=number[j];
			}
		}
		printf("\n");

	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%c\t",matrix[i][j]);
		}
		printf("\n");
	}
	for(i=0;i <n/2; i++){
		for(j=0; j<n/2; j++){
			result[i][j] = max1(n, matrix, i*2, j*2);
		}
	}
	printf("\n");
	for(i=0;i <n/2; i++){
		for(j=0; j<n/2; j++){
			printf("%c\t", result[i][j]);
		}
		printf("\n");
	}
}
if(option=='3'){
printf("Exiting....Thank You!\n");
break;
}
}while(1);

}

void matrice_2by2(){
    int i,j;
    int matrice[2][2];
printf("Enter the elements of 2-by-2 matrice:\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
        scanf("%d",&matrice[i][j]);
    }
}
printf("\n");
int max=matrice[0][1];
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",matrice[i][j]);
        if(max<matrice[i][j]){
            max=matrice[i][j];
        }
    }
    printf("\n");
}
printf("\n%d\n",max);
}

void matrice_4by4(){
    int i,j;
    int matrice[4][4];
    int new1[2][2],new2[2][2],new3[2][2],new4[2][2];
printf("Enter the elements of 4-by-4 matrice:\n");
for(i=0; i<4; i++){
    for(j=0; j<4;j++){
        scanf("%d",&matrice[i][j]);
    }
}

for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        new1[i][j]=matrice[i][j];
    }
}

for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        new2[i][j]=matrice[i][j+2];
    }
}

for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        new3[i][j]=matrice[i+2][j];
    }
}

for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
        new4[i][j]=matrice[i+2][j+2];
    }
}
int max1=new1[0][0],max2=new2[0][0],max3=new3[0][0],max4=new4[0][0];
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new1[i][j]);
        if(max1<new1[i][j]){
            max1=new1[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new2[i][j]);
        if(max2<new2[i][j]){
            max2=new2[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new3[i][j]);
        if(max3<new3[i][j]){
            max3=new3[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new4[i][j]);
        if(max4<new4[i][j]){
            max4=new4[i][j];
        }
    }
    printf("\n");
}
printf("\n");
int final_matrice[2][2]={{max1,max2},{max3,max4}};
printf("The Final Matrice is:\n");
for(i=0; i<2; i++){
    for(j=0; j<2; j++){
        printf("%d\t",final_matrice[i][j]);
    }
    printf("\n");
}
}

#include <stdio.h>

void matrice_8by8(){
    int i,j;
    int matrice[8][8];
    int new1[2][2],new2[2][2],new3[2][2],new4[2][2],new5[2][2],new6[2][2],new7[2][2],new8[2][2],new9[2][2],new10[2][2],new11[2][2],new12[2][2],new13[2][2],new14[2][2],new15[2][2],new16[2][2];
printf("Enter the elements of 8-by-8 matrice:\n");
for(i=0; i<8; i++){
    for(j=0; j<8;j++){
        scanf("%d",&matrice[i][j]);
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new1[i][j]=matrice[i][j];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new2[i][j]=matrice[i][j+2];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new3[i][j]=matrice[i][j+4];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new4[i][j]=matrice[i][j+6];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new5[i][j]=matrice[i+2][j];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new6[i][j]=matrice[i+2][j+2];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new7[i][j]=matrice[i+2][j+4];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new8[i][j]=matrice[i+2][j+6];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new9[i][j]=matrice[i+4][j];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new10[i][j]=matrice[i+4][j+2];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new11[i][j]=matrice[i+4][j+4];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new12[i][j]=matrice[i+4][j+6];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new13[i][j]=matrice[i+6][j];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new14[i][j]=matrice[i+6][j+2];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new15[i][j]=matrice[i+6][j+4];
    }
}

for (i=0; i<2; i++){
    for (j=0; j<2; j++){
        new16[i][j]=matrice[i+6][j+6];
    }
}
int max1=new1[0][0],max2=new2[0][0],max3=new3[0][0],max4=new4[0][0],max5=new5[0][0],max6=new6[0][0],max7=new7[0][0],max8=new8[0][0],max9=new9[0][0],max10=new10[0][0],max11=new11[0][0],max12=new12[0][0],max13=new13[0][0],max14=new14[0][0],max15=new15[0][0],max16=new16[0][0];
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new1[i][j]);
        if(max1<new1[i][j]){
            max1=new1[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new2[i][j]);
        if(max2<new2[i][j]){
            max2=new2[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new3[i][j]);
        if(max3<new3[i][j]){
            max3=new3[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new4[i][j]);
        if(max4<new4[i][j]){
            max4=new4[i][j];
        }
    }
    printf("\n");
}
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new5[i][j]);
        if(max5<new5[i][j]){
            max5=new5[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new6[i][j]);
        if(max6<new6[i][j]){
            max6=new6[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new7[i][j]);
        if(max7<new7[i][j]){
            max7=new7[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new8[i][j]);
        if(max8<new8[i][j]){
            max8=new8[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new9[i][j]);
        if(max9<new9[i][j]){
            max9=new9[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new10[i][j]);
        if(max10<new10[i][j]){
            max10=new10[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new11[i][j]);
        if(max11<new11[i][j]){
            max11=new11[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new12[i][j]);
        if(max12<new12[i][j]){
            max12=new12[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new13[i][j]);
        if(max13<new13[i][j]){
            max13=new13[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new14[i][j]);
        if(max14<new14[i][j]){
            max14=new14[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new15[i][j]);
        if(max15<new15[i][j]){
            max15=new15[i][j];
        }
    }
    printf("\n");
}
printf("\n");
for(i=0; i<2; i++){
    for(j=0; j<2;j++){
            printf("%d\t",new16[i][j]);
        if(max16<new16[i][j]){
            max16=new16[i][j];
        }
    }
    printf("\n");
}
printf("\n");


int final_matrice[4][4]={{max1,max2,max3,max4},{max5,max6,max7,max8},{max9,max10,max11,max12},{max13,max14,max15,max16}};
printf("The Final Matrice is:\n");
for(i=0; i<4; i++){
    for(j=0; j<4; j++){
        printf("%d\t",final_matrice[i][j]);
    }
    printf("\n");
}
printf("\n");
}

char max1(int n, char matrix[n][n], int r, int c){
	int max = 0;
	int i, j;
	for(i=r; i<r+2; i++){
		for(j=c; j<c+2; j++){
			if(matrix[i][j] > max){
				max = matrix[i][j];
			}
		}
	}
	return max;
}
