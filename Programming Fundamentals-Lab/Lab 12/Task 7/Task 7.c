#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int vowel(char c){
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c== 'A' || c=='E' || c=='I' || c== 'O' || c=='U');
}
char encrypt_data(char c){
    if (isalpha(c)){
        char base;
        if(islower(c)){
            base='a';
        }
        else{
            base='A';
        }
        return(c-base+3)%26+base;
    }
    else{
        return c;
    }
}
void main(void){
    char c;
    int count_vowels = 0;

    FILE *f1=fopen("input.txt", "r");
    if (f1==NULL){
        printf("Error opening file input.txt\n");
        exit(0);
    }

    FILE *f2=fopen("output.txt", "w");
    if (f2==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    while((c=fgetc(f1))!= EOF){
        if (vowel(c)){
            count_vowels++;
            if (count_vowels%2==1){
                fprintf(f2,"vow");
            }
            else{
                fprintf(f2,"VOW");
            }
        }
        else if(c=='s'||c=='S'){
            char buffer[6]={'P','F','-','L','a','b'};
            fwrite(buffer,sizeof(char), 4, f2);
        }
        else{
            fprintf(f2,"%c",encrypt_data(c));
        }
    }
    fclose(f1);
    fclose(f2);

    printf("Encryption Completed!\n");
}
