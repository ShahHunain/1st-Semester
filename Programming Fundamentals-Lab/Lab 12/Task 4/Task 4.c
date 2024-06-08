#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct tool{
    int id;
    char name[30];
    int quantity;
    float cost;
};

void initialize(){
    FILE *file=fopen("hardware.txt","w");
    if(file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    struct tool empty;
    int i;

    for (i=0; i<10; i++){
        fwrite(&empty,sizeof(struct tool),1,file);
    }
    fclose(file);
}
void display(struct tool t){
    printf("Tool ID: %d\n",t.id);
    printf("Tool Name: %s\n",t.name);
    printf("Quantity: %d\n",t.quantity);
    printf("Cost: %.2f\n",t.cost);
    printf("\n");
}
void list(){
    FILE *file=fopen("hardware.txt","r");
    if (file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    struct tool t;
    printf("\n\tList of Tools:\n");
    while (fread(&t, sizeof(struct tool),1, file) == 1) {
        if (t.id!=0){
            display(t);
        }
    }
    fclose(file);
}
void add(){
    FILE *file=fopen("hardware.txt", "r+");
    if (file==NULL){
        printf("Error opening file for adding a tool.\n");
        exit(1);
    }
    struct tool t;
    int id;
    printf("Enter the Tool ID: ");
    scanf("%d",&id);
    if (id<= 0|| id>10) {
        printf("Invalid Tool ID\n");
        fclose(file);
        return;
    }
    fseek(file,(id-1)*sizeof(struct tool),SEEK_SET);
    fread(&t,sizeof(struct tool),1,file);
    if (t.id!=0){
        printf("Tool with ID %d already exists therefore: use the update option to modify\n",id);
        fclose(file);
        return;
    }
    t.id=id;
    printf("Enter the Tool Name: ");
    scanf("%s",t.name);
    printf("Enter the quantity: ");
    scanf("%d",&t.quantity);
    printf("Enter the cost: ");
    scanf("%f",&t.cost);
    fseek(file,(id-1)*sizeof(struct tool),SEEK_SET);
    fwrite(&t,sizeof(struct tool),1,file);
    printf("Tool is successfully added\n");

    fclose(file);
}
void delete_(){
    FILE *file=fopen("hardware.txt","r+");
    if(file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    struct tool empty={0, "", 0, 0.0};
    int id;

    printf("Enter the Tool ID to delete: ");
    scanf("%d",&id);

    if (id<=0 || id>10){
        printf("Invalid Tool ID\n");
        fclose(file);
        return;
    }
    fseek(file,(id-1)*sizeof(struct tool),SEEK_SET);
    fwrite(&empty,sizeof(struct tool),1,file);

    printf("Tool with %d ID is successfully deleted\n",id);
    fclose(file);
}
void update(){
    FILE *file=fopen("hardware.txt","r+");
    if(file==NULL){
        printf("Error opening the file\n");
        exit(0);
    }
    struct tool t;
    int id;

    printf("Enter the Tool ID you want to update: ");
    scanf("%d",&id);

    if(id<=0 || id>10){
        printf("Invalid Tool ID\n");
        fclose(file);
        return;
    }
    fseek(file,(id-1)*sizeof(struct tool),SEEK_SET);
    fread(&t,sizeof(struct tool),1,file);

    if(t.id==0){
        printf("Tool with ID %d does not exist therefore you can use the add option to create a new tool\n", id);
        fclose(file);
        return;
    }
    printf("Current details for Tool ID %d:\n",id);
    display(t);
    printf("Enter updated details for %d Tool ID:\n",id);
    printf("Enter the Tool Name: ");
    scanf("%s",t.name);
    printf("Enter the quantity: ");
    scanf("%d",&t.quantity);
    printf("Enter the cost: ");
    scanf("%f",&t.cost);

    fseek(file,(id-1)*sizeof(struct tool),SEEK_SET);
    fwrite(&t,sizeof(struct tool),1,file);
    printf("Tool with ID %d is successfully updated\n",id);
    fclose(file);
}
void main(void){
    initialize();

    char choice;
    do{
        printf("\t\tPlease choose from the following options:\n");
        printf("1) List all tools\n");
        printf("2) Add a tool\n");
        printf("3) Delete a tool\n");
        printf("4) Update tool information\n");
        printf("0) Exit\n");

        printf("Enter your choice: ");
        fflush(stdin);
        choice=getchar();

        switch(choice){
            case '1':
                list();
                break;
            case '2':
                add();
                break;
            case '3':
                delete_();
                break;
            case '4':
                update();
                break;
            case '0':
                printf("Exiting the program\n");
                break;
            default:
                printf("INVALID INPUT\n");
        }
    }while(choice!='0');
printf("\n");
}
