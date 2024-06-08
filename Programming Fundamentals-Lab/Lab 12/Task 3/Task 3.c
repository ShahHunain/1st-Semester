#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student{
    int id;
    char name[30];
    char sex;
    float quiz_1;
    float quiz_2;
    float midterm;
    float final_mark;
    float total;
};

void main(void){
    FILE *fptr=fopen("studentrecords.txt","w");
    if (fptr==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    printf("Enter the number of students: ");
    int n;
    scanf("%d",&n);

    struct student s[n];
    int i;
    for(i=0; i<n; i++){
        printf("\nEnter the id of %d student:",i+1);
        scanf("%d",&s[i].id);
        printf("\nEnter the name of %d student: ",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("\nSex (M=Male / F=Female): ");
        fflush(stdin);
        scanf("%c",&s[i].sex);
        printf("\nEnter the score of QUIZ 1: ");
        scanf("%f",&s[i].quiz_1);
        printf("\nEnter the score of QUIZ 2: ");
        scanf("%f",&s[i].quiz_2);
        printf("Enter the score of Mid-term: ");
        scanf("%f",&s[i].midterm);
        printf("\nEnter the score of Final: ");
        scanf("%f",&s[i].final_mark);

        s[i].total=s[i].quiz_1+s[i].quiz_2+s[i].midterm+s[i].final_mark;

        fprintf(fptr,"%d %s %c %.2f %.2f %.2f %.2f %.2f\n",s[i].id,s[i].name,s[i].sex,s[i].quiz_1,s[i].quiz_2,s[i].midterm,s[i].final_mark,s[i].total);
    }
    fclose(fptr);

    float score=0.0;
    printf("\nEnter a score threshold (50, 80, 100) to analyze scores or 0 to end: ");
    scanf("%f",&score);

    while (score!=0){
        int count_below=0;
        for(i=0; i<n; i++){
            if(score==100 && s[i].total==100){
                printf("Student %s scored 100 in total\n",s[i].name);
            }else if(s[i].total<score){
                count_below++;
            }
        }
        printf("Number of students with a total score below %.2f: %d\n",score,count_below);

        printf("\nEnter a score threshold (50, 80, 100) to analyze scores or 0 to end: ");
        scanf("%f", &score);
    }
}
