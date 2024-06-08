#include<stdio.h>
#include<string.h>

struct students {
    int roll_number;
    char name[30];
    char department[20];
    int batch;
    char section[10];
    float cgpa;
};

void main(void){
    int n;
    printf("Please enter the number of students data you want to store: ");
    scanf("%d",&n);

    struct students s[n];
    int i;

    for (i=0; i<n; i++) {
        printf("\nEnter the roll number of %d student: ",i+1);
        scanf("%d",&s[i].roll_number);
        printf("\nEnter the name of %d student: ",i+1);
        fflush(stdin);
        gets(s[i].name);
        printf("\nEnter the department of %d student: ",i+1);
        fflush(stdin);
        gets(s[i].department);
        printf("\nEnter the batch number of %d student: ",i+1);
        scanf("%d",&s[i].batch);
        printf("\nEnter the section of %d student: ",i+1);
        fflush(stdin);
        gets(s[i].section);
        printf("\nEnter the CGPA of %d student: ",i+1);
        scanf("%f",&s[i].cgpa);
        printf("\n");
    }

    FILE *file=fopen("file.txt","w");
    if(file==NULL){
        printf("\nError opening the file\n");
        exit(0);
    }

    for(i=0; i<n; i++){
        fprintf(file,"%d %s %s %d %s %f\n",s[i].roll_number,s[i].name,s[i].department,s[i].batch,s[i].section,s[i].cgpa);
    }
    fclose(file);

    file=fopen("file.txt","r");
    if(file==NULL){
        printf("\nError opening the file\n");
        exit(0);
    }
    int search;
    printf("Enter the roll number you want to search for: ");
    scanf("%d",&search);

    int index=0,found=0;
    while(fscanf(file,"%d %s %s %d %s %f",&s[index].roll_number,s[index].name,s[index].department,&s[index].batch,s[index].section,&s[index].cgpa)!=EOF){
        if(search==s[index].roll_number){
            printf("\nThe roll number of student is: ");
            printf("%d",s[index].roll_number);
            printf("\nThe name of student is: ");
            puts(s[index].name);
            printf("\nThe department of student is: ");
            puts(s[index].department);
            printf("\nThe batch number of student is: ");
            printf("%d",s[index].batch);
            printf("\nThe section of student is: ");
            puts(s[index].section);
            printf("\nCGPA of student is: ");
            printf("%f",s[index].cgpa);
            printf("\n");
            found=1;
            break;
        }
        index++;
    }
    fclose(file);

    file=fopen("file.txt", "r");
    if(file==NULL){
        printf("\nError opening the file\n");
        exit(0);
    }

    int Batch=2022,read=0;
    printf("\nStudents in Batch %d: \n",Batch);
    rewind(file);

    while(fscanf(file,"%d %s %s %d %s %f",&s[read].roll_number,s[read].name,s[read].department,&s[read].batch,s[read].section,&s[read].cgpa)!=EOF){
        if(s[read].batch==Batch){
            printf("\nThe roll number of student is: ");
            printf("%d",s[read].roll_number);
            printf("\nThe name of student is: ");
            puts(s[read].name);
            printf("\nThe department of student is: ");
            puts(s[read].department);
            printf("The batch number of student is: ");
            printf("%d",s[read].batch);
            printf("\nThe section of student is: ");
            puts(s[read].section);
            printf("\nCGPA of student is: ");
            printf("%f",s[read].cgpa);
            printf("\n");
        }
        read++;
    }
    fclose(file);
}
