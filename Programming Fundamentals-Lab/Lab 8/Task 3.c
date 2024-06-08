#include<stdio.h>
#include<string.h>
void main(void){

char text[500], search;
int count;
count=0;

printf("Enter your text: \n");
gets(text);

printf("Enter the character you want to search for in your text: \n");
search=getchar();

for (int i=0; text[i]!='\0'; i++){
	if (text[i]==search){
	count++;
    }
}
printf("The character '%c' comes %d time in your text\n",search,count);
	
}
