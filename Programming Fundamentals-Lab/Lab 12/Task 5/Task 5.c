#include<stdio.h>
#include<conio.h>
void main(void){
    FILE *fptr;

fptr=fopen("budget.txt","w");
    if(fptr==NULL){
    printf("Error opening the file\n");
    exit(0);
    }

    fprintf(fptr,"-462.13   486.47   973.79\n");
    fprintf(fptr," 755.42   843.04  -963.67\n");
    fprintf(fptr," 442.5   -843.02  -462.86\n");
    fprintf(fptr,"-233.93  -821.67   399.59\n");
    fprintf(fptr,"-379.65  -556.37   837.46\n");
    fprintf(fptr,"  55.1   -144.93   -93.15\n");
    fprintf(fptr," 533.73   804.64   -66.25\n");
    fprintf(fptr,"-922.12   914.68  -264.67\n");
    fprintf(fptr,"-600.27  -838.59   747.02\n");
    fprintf(fptr,"-962.97    49.96  -677.79\n");

    fclose(fptr);

    fptr=fopen("budget.txt","r");
    if(fptr==NULL){
        printf("\nError opening the file\n");
        exit(0);
    }
float num,sum_col1=0,sum_col2=0,sum_col3=0;
int i=0;

    for(i=0;i<10;i++){
        fscanf(fptr,"%f",&num);
        sum_col1=sum_col1+num;

        fscanf(fptr,"%f",&num);
        sum_col2=sum_col2+num;

        fscanf(fptr,"%f",&num);
        sum_col3=sum_col3+num;
}
    fclose(fptr);
printf("\n");
printf("The sum of 1st column is: %.2f\n",sum_col1);
printf("The sum of 2nd column is: %.2f\n",sum_col2);
printf("The sum of 3rd column is: %.2f\n",sum_col3);
}
