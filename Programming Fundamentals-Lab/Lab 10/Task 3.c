#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    char sentence[1000];

    printf("Enter a sentence less than 1000 letters:\n");
    gets(sentence);

    char **final_array=0;
    int i=0,words=0;

    int count=0;

    int number_of_words=strlen(sentence);

printf("\nThe length of the input character array is: %d\n",number_of_words);

    for (i=0; sentence[i]!='\0'; i++){
        if (sentence[i]!=' '){
        count++;
        }
}
printf("\nWith out space the length of the input character array is: %d\n",count);

    char *token=strtok(sentence," ");
    while(token!=0){
        final_array = (char **)realloc(final_array,(words+1)*sizeof(char *));
        final_array[words]=(char *)malloc((strlen(token)+ 1)*sizeof(char));

        strcpy(final_array[words], token);

        words++;
        token=strtok(0," ");
    }
    printf("\n2D Array Output:\n");
    for (i=0; i<words; i++){
        printf("%s\n",*(final_array + i));
    }

    for (i=0; i<words; i++){
        free(*(final_array+i));
    }
    free(final_array);

}
