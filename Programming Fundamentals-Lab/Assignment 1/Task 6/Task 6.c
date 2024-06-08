#include<stdio.h>
#include<conio.h>
void main (void){

char choice,types,order;
int quantity,type,totalcost,p1,p2,p3,p4;
quantity=totalcost=p1=p2=p3=p4=0;

//Burger= Rs.200; French Fries= Rs.50; Pizza= Rs.500; Sandwhiches= Rs.150

    printf("The following is our menu\n");
    printf("B=Burger cost Rs. 200\n");
    printf("F=French Fries cost Rs. 50\n");
    printf("P=Pizza cost Rs. 500\n");
    printf("S=Sandwhiches cost Rs. 150\n");
    printf("\nHow many types of snacks you want to order?\n\n1, 2, 3 or 4?\n");
    types=getche();

    if(types == '1'){
		printf("\nPlease enter the snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
            break;
            default:
                printf("\nInvalid input\n");
	 	}

	} else if(types == '2'){
		printf("Please enter the first snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
            break;
            default:
                printf("\nInvalid input\n");
	 	}
	 	printf("Please enter the second snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			    break;
            default:
                printf("\nInvalid input\n");
	 	}
	} else if(types == '3'){
		printf("\nPlease enter the first snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			break;
            default:
                printf("\nInvalid input\n");
	 	}
	 	printf("Please enter the second snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			    break;
            default:
                printf("\nInvalid input\n");
	 	}
	 	printf("Please enter the third snack you have to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			break;
            default:
                printf("\nInvalid input\n");
	 	}
	} else if(types == '4'){
		printf("Please enter the first snack you want to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
            break;
            default:
                printf("Invalid input\n");
	 	}
	 	printf("Please enter the second snack you want to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
            break;
            default:
                printf("\nInvalid input\n");
	 	}
	 	printf("Please enter the third snack you want to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			break;
            default:
                printf("\nInvalid input\n");
	 	}
	 	printf("Please enter the fourth snack you want to order=\n");
		type = getche();
		printf("\nEnter the quantity of the selected snack=\n");

		switch(type){
			case 'B':
			    scanf("%d", &p1);
			break;
			case 'F':
			    scanf("%d", &p2);
			break;
			case 'P':
			    scanf("%d", &p3);
			break;
			case 'S':
			    scanf("%d", &p4);
			    break;
            default:
                printf("\nInvalid input\n");
	 	}
	}
	printf("\tYour order\n");

	//Burger= Rs.200; French Fries= Rs.50; Pizza= Rs.500; Sandwhiches= Rs.150;
	if(p1 != 0){
		printf("%d Burger of Rs %d\n", p1, p1*200);
	}
	if(p2 != 0){
		printf("%d French Fries of Rs %d\n", p2, p2*50);
	}
	if(p3 != 0){
		printf("%d Pizza of Rs. %d\n", p3, p3*500);
	}
	if(p4 != 0){
		printf("\n%d Sandwiches of Rs. %d\n", p4, p4*150);
	}
	totalcost=200*p1+50*p2+500*p3+150*p4;
	printf("\n\tTotal Cost is %d",totalcost);
	printf("\nThanks for your order!\nVisit us again soon...\n");
}
