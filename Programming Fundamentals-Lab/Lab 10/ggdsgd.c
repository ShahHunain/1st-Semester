#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){

char sentence[1000];
char *word_array=sentence;

printf("Enter a sentence less than 1000 words:\n");
gets(sentence);

int i=0,j=0,count=0;

int number_of_words=strlen(sentence);

printf("The length of the input string is: %d\n",number_of_words);

for (i=0; sentence[i]!='\0'; i++){
        if (sentence[i]!=' '){
        count++;
        }
}
printf("With out space the length of the input string is: %d\n",count);

char **newarray=(char *)malloc(count * sizeof (char));

for (i=0; i<number_of_words; i++){
    if (sentence[i]!=' '){
        word_array=&sentence[i];
        printf("%c",*word_array);
    } if (sentence[i]==' '){
        printf("\n");
        }
    word_array++;
}

}
