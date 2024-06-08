#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void combine(int n);
struct personal{
    int id;
    char name[40];
};

struct department{
    int id;
    int salary;
};

void main(void){

    printf("................................................\n");
    printf("Roll Number: 23K-3032\t\tName:Shah Hunain\n");
    printf("................................................\n\n");

    int i,j,n;
    i=j=n=0;
    printf("Please enter the number of employees: ");
    scanf("%d",&n);
    struct personal emp1[n];
    for (i=0; i<n; i++){
        printf("Enter the id:");
        scanf("%d",&emp1[i].id);
        fflush(stdin);
        printf("Enter the name:");
        fflush(stdin);
        gets(emp1[i].name);
    }
    FILE *personal_file=fopen("Personal.txt","w");
    if(personal_file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    for (i=0; i<n; i++){
        fprintf(personal_file,"%d  %s\n",emp1[i].id,emp1[i].name);
    }
    fclose(personal_file);

    struct department emp2[n];
    for (i=0; i<n; i++){
        printf("Enter id:");
        scanf("%d", &emp2[i].id);
        printf("Enter salary:");
        scanf("%d", &emp2[i].salary);
    }
    FILE *department_file=fopen("Department.txt","w");
    if(department_file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    for (i=0; i<n; i++){
        fprintf(department_file,"%d %d\n",emp2[i].id,emp2[i].salary);
    }
    fclose(department_file);
    combine(n);
}
void combine(int n){
    int i,j;

    struct personal data1[n];
    struct department data2[n];

    FILE *personal_file=fopen("Personal.txt","r");
    if(personal_file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    for (i=0; i<n; i++){
        fscanf(personal_file,"%d %s\n",&data1[i].id,&data1[i].name);
    }
    fclose(personal_file);

    FILE *department_file=fopen("Department.txt","r");
    if(department_file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    for (i=0; i<n; i++){
        fscanf(department_file,"%d %d\n",&data2[i].id,&data2[i].salary);
    }
    fclose(department_file);
    FILE *merged_file=fopen("Combine.txt", "w");
    if(merged_file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            if (data1[i].id==data2[j].id){
                fprintf(merged_file,"%d %s %d\n",data1[i].id,data1[i].name,data2[j].salary);
            }
        }
    }
    fclose(merged_file);
}
