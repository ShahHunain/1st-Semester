#include<stdio.h>
void calculateDiscount(float totalpurchasedamount, int timevisited);

void main(void){

float totalpurchasedamount; int timevisited;
totalpurchasedamount=timevisited=0;

printf("Please enter the total purchase amount: \n");
scanf("%f",&totalpurchasedamount);

printf("Now enter the number of times you have visited in the past month: \n");
scanf("%d",&timevisited);

calculateDiscount(totalpurchasedamount, timevisited);
}
void calculateDiscount(float totalpurchasedamount, int timevisited){
    if (timevisited>10 && totalpurchasedamount>=50){
        totalpurchasedamount=totalpurchasedamount-totalpurchasedamount*0.15;
        printf("The calculated discount amount is: %.2f\n",totalpurchasedamount);
    }
    else if (timevisited>5 && totalpurchasedamount>=30){
        totalpurchasedamount=totalpurchasedamount-totalpurchasedamount*0.10;
        printf("The calculated discount amount is: %.2f\n",totalpurchasedamount);
    }
    else{
        printf("There is no discount applied and amount is: %.2f\n",totalpurchasedamount);
    }

}
