#include<stdio.h>
#include<conio.h>
void main (void){
char coffee,size;
int Totaltime;

printf("Enter your choice for coffee\nB= Black \nW=White\n");
coffee=getche();
printf("\nEnter size of coffee you want\nD= Double \nM= Manual\n");
size=getche();

switch(coffee){
case 'W':
    if((coffee=='W') && (size=='M')){
            printf("\n______________________________________\n");
            printf("Operation                 White Coffee\n");
            printf("______________________________________\n");
            printf("Put Water                      15 mins\n");
            printf("Sugar                          15 mins\n");
            printf("Mix Well                       20 mins\n");
            printf("Add Coffee                      2 mins\n");
            printf("Add Milk                        4 mins\n");
            printf("Mix Well                       20 mins\n");
            printf("\n______________________________________");
            Totaltime= 15+15+20+2+4+20;
            printf("\nThe Total Bake Time is %d minutes",Totaltime);}
            else{
            printf("\n______________________________________\n");
            printf("Operation                 White Coffee\n");
            printf("______________________________________\n");
            printf("Put Water                      23 mins\n");
            printf("Sugar                          23 mins\n");
            printf("Mix Well                       30 mins\n");
            printf("Add Coffee                      3 mins\n");
            printf("Add Milk                        6 mins\n");
            printf("Mix Well                       30 mins\n");
            printf("\n______________________________________");
            Totaltime= 23+23+30+3+6+30;
            printf("\nThe Total Bake Time is %d minutes",Totaltime);
            }
            break;
        case 'B':
            if ((coffee=='B')&&(size=='M')){
            printf("\n______________________________________\n");
            printf("Operation                 Black Coffee\n");
            printf("______________________________________\n");
            printf("Put Water                      20 mins\n");
            printf("Sugar                          20 mins\n");
            printf("Mix Well                       25 mins\n");
            printf("Add Coffee                     15 mins\n");
            printf("Add Milk                        - mins\n");
            printf("Mix Well                       25 mins\n");
            printf("\n______________________________________");
            Totaltime= 20+20+25+15+0+25;
            printf("\nThe Total Bake Time is %d minutes",Totaltime);}
            else{
            printf("\n______________________________________\n");
            printf("Operation                 Black Coffee\n");
            printf("______________________________________\n");
            printf("Put Water                      30 mins\n");
            printf("Sugar                          30 mins\n");
            printf("Mix Well                       38 mins\n");
            printf("Add Coffee                     23 mins\n");
            printf("Add Milk                        - mins\n");
            printf("Mix Well                       38 mins\n");
            printf("\n______________________________________");
            Totaltime= 30+30+38+23+0+38;
            printf("\nThe Total Bake Time is %d minutes",Totaltime);
            }
            }
    }
