#include<stdio.h>
#include<string.h>

struct Organization{
    char organization_name[30];
    char organization_number[30];
        struct Employee{
            int employee_id;
            char employee_name[30];
            int employee_salary;
        }e1;
};
void main(void){
    struct Organization o1;

    printf("Enter the name of organization: ");
    fflush(stdin);
    gets(o1.organization_name);

    printf("\nEnter the number of organization: ");
    fflush(stdin);
    gets(o1.organization_number);

    printf("\nEnter the employee id: ");
    scanf("%d",&o1.e1.employee_id);

    printf("\nEnter the employee name: ");
    fflush(stdin);
    gets(o1.e1.employee_name);

    printf("\nEnter the employee salary: ");
    scanf("%d",&o1.e1.employee_salary);

    //Printing the output
    printf("\n\n");
    printf("---------------------------------------------------\n");

    printf("\n%d",sizeof(o1));

    printf("\nThe name of organization is: ");
    puts(o1.organization_name);

    printf("\nThe number of organization is: ");
    puts(o1.organization_number);

    printf("\nThe employee id is: ");
    printf("%d",o1.e1.employee_id);

    printf("\n\nThe employee name is: ");
    puts(o1.e1.employee_name);

    printf("\nThe employee salary is: ");
    printf("%d\n",o1.e1.employee_salary);

}
