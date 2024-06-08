#include<stdio.h>
#include<string.h>

struct Book{
    int accession_number;
    char author[30];
    char title[30];
    int is_issued;
};

void main(void){
    struct Book library[100];
    int n=0,i;
    char choice;

    while (choice!='7'){
        printf("\t\t\tLibrary Menu:\n");
        printf("1) Display all the books in the library\n");
        printf("2) Add a book to the library\n");
        printf("3) Display books by a particular author\n");
        printf("4) Display the number of books by title\n");
        printf("5) Display the total number of books present in the library\n");
        printf("6) Issue a book from the library\n");
        printf("7) Exit\n");

        printf("Enter your choice: ");
        fflush(stdin);
        choice=getchar();

        printf("\n");

        switch(choice){
            case '1': {
                if (n==0){
                    printf("The books are not available in the library\n");
                }
                else{
                    printf("Books available in the library are:\n");
                    for (i=0; i<n; i++){
                        printf("Accession Number: %d\n",library[i].accession_number);
                        printf("Author: ");
                        puts(library[i].author);
                        printf("\nTitle: ");
                        puts(library[i].title);
                        printf("Issued: ");
                        if(library[i].is_issued==0){
                            printf("Yes\n");
                        }
                        else{
                            printf("No\n");
                        }
                        printf("----------------------------\n");
                    }
                }
                break;
            }
            case '2': {
                if (n<100){
                    printf("Please enter the Accession Number: ");
                    scanf("%d",&library[n].accession_number);

                    printf("\nNow enter the Author's Name: ");
                    fflush(stdin);
                    gets(library[n].author);

                    printf("\nNow enter the Book Title: ");
                    fflush(stdin);
                    gets(library[n].title);

                    library[n].is_issued=0;

                    n=n+1;

                    printf("\nThe new book has been added successfully");
                } else {
                    printf("\nA new book can not be added because the library is full");
                }
                break;
            }
            case '3': {
                char author[30];
                int count=0;

                printf("Enter the name of author: ");
                fflush(stdin);
                gets(author);

                for (i=0; i<n; i++) {
                    if (strcmp(library[i].author,author)==0){
                        printf("Accession Number: %d\n",library[i].accession_number);
                        printf("Author: %s\n",library[i].author);
                        printf("Title: %s\n",library[i].title);
                        printf("Issued: %s\n",library[i].is_issued ? "Yes" : "No");
                        printf("----------------------------\n");
                        count=1;
                    }
                }
                if (count==0) {
                    printf("No books found for ");
                    puts(author);
                }
                break;
            }
            case '4': {
                char title[30];
                int count=0;

                printf("Enter book title: ");
                fflush(stdin);
                gets(title);

                for (i=0; i<n; i++){
                    if (strcmp(library[i].title,title)==0) {
                        count++;
                    }
                }
                printf("Number of books with title %s: %d\n",title,count);
                break;
            }
            case '5':
                printf("\nThe total number of books in the library are: %d",n);
                break;
            case '6': {
                int accession_number;
                int count=0;

                printf("Please enter the Accession Number of the book you want to issue: ");
                scanf("%d",&accession_number);

                for(i=0; i<n; i++) {
                    if (library[i].accession_number==accession_number) {
                        if (library[i].is_issued==0){
                            library[i].is_issued=1;
                            printf("Book with Accession Number %d issued successfully.\n",accession_number);
                        } else{
                            printf("Book with Accession Number %d is already issued.\n",accession_number);
                        }
                        count=1;
                        break;
                    }
                }

                if (count==0){
                    printf("Book with Accession Number %d not found.\n",accession_number);
                }
                break;
            }
            case '7':
                printf("\nExit");
                break;
            default:{
                printf("\nINVALID INPUT--");
                printf("Please choose from the menu\n");
            }
        }
        printf("\n\n");
    }
}
