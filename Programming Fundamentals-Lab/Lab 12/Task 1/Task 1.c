#include<stdio.h>
#include<stdlib.h>
void main(void){
    FILE *f1=fopen("f1.txt","w");
    if (f1==NULL){
        printf("Error opening f1.txt\n");
        exit(0);
    }

	fprintf(f1,"This is the text from f1\n");
    fclose(f1);

    FILE *f2=fopen("f2.txt","w");
    if (f2==NULL){
        printf("Error opening f2.txt\n");
        exit(0);
    }

	fprintf(f2,"This is the text from f2\n");
    fclose(f2);

    FILE *input_F1=fopen("f1.txt","r");
    FILE *input_F2=fopen("f2.txt","r");
    FILE *output_F=fopen("merged.txt","w");

    if (input_F1==NULL || input_F2==NULL || output_F==NULL){
        printf("Error opening the files\n");
        exit(0);
    }

    char ch;

    while ((ch=fgetc(input_F1))!=EOF){
        fputc(ch,output_F);
    }

    fprintf(output_F,"\n");

    while ((ch=fgetc(input_F2))!=EOF){
        fputc(ch,output_F);
	}
    fclose(input_F1);
    fclose(input_F2);
    fclose(output_F);

    printf("Successfully the files have been created and merged\n");
}
