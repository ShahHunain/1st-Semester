#include<stdio.h>
#include<string.h>

struct Student{
    int students_id;
    char FirstName[20];
    char LastName[20];
    char cellno[12];
    char email[30];
    struct Register{
        int CourseId;
        char CourseName[20];
    } r;
};

int main(void) {
    struct Student std[5];

    int i;
    for (i=0; i<2; i++) {
        printf("Enter the student id of %d student: ",i+1);
        scanf("%d",&std[i].students_id);

        printf("\nEnter the first name of %d student: ",i+1);
        fflush(stdin);
        gets(std[i].FirstName);

        printf("\nEnter the last name of %d student: ",i+1);
        fflush(stdin);
        gets(std[i].LastName);

        printf("\nEnter the cell number of %d student: ",i+1);
        fflush(stdin);
        gets(std[i].cellno);

        printf("\nEnter the email of %d student: ",i+1);
        fflush(stdin);
        gets(std[i].email);

        printf("\nEnter the course id of %d student: ",i+1);
        scanf("%d",&std[i].r.CourseId);

        printf("\nEnter the course name of %d student: ",i+1);
        fflush(stdin);
        gets(std[i].r.CourseName);

        printf("\n");
    }

    printf("\n");
    printf("-------------------------------------------");
    for (i=0; i<2; i++){
        printf("\nThe student id of %d student: ",i+1);
        printf("%d",std[i].students_id);

        printf("\n\nThe first name of %d student: ",i+1);
        puts(std[i].FirstName);

        printf("\nThe last name of %d student: ",i+1);
        puts(std[i].LastName);

        printf("\nThe cell number of %d student: ",i+1);
        puts(std[i].cellno);

        printf("\nThe email of %d student: ",i+1);
        puts(std[i].email);

        printf("\nThe course id of %d student: ",i+1);
        printf("%d", std[i].r.CourseId);

        printf("\n\nThe course name of %d student: ",i+1);
        puts(std[i].r.CourseName);
    }
}
