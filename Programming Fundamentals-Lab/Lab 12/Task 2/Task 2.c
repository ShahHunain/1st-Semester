#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int count_alpha(FILE *ptr, int *letters);

void main(void){

	FILE *f1;
	FILE *f2;

	f1=fopen("text.txt","r");
	if(f1==NULL){
        printf("Error opening the file\n");
        exit(0);
	}
	f2=fopen("output.txt","w");
    if(f2==NULL){
        printf("Error opening the file\n");
        exit(0);
	}
	int letters[26]={0};
	int total_char;
	int *ptr=letters;

	total_char=count_alpha(f1,ptr);

	for(int i=0; i<26; i++){
		fprintf(f2,"%c\t (Occurrences of %c / %c = %d)\n",'A'+i,'A'+i,'a'+i,ptr[i]);
	}

	fprintf(f2,"Total characters read=%d",total_char);
	fclose(f1);
	fclose(f2);
}

int count_alpha(FILE* ptr, int* letters){

	char ch;
	int total_char=0;

	ch=getc(ptr);
	while(ch!=EOF){
		if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
			letters[tolower(ch)-'a']++;
			total_char++;
		}
		ch=getc(ptr);
	}
	return total_char;
}
