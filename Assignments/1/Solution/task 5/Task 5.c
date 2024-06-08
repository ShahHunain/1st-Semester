#include<stdio.h>
#include<conio.h>
void main(void){

int item1,item2,item3,item4,item5,itemtotal;
item1=item2=item3=item4=item5=itemtotal=0;

float gst,grandtotal,totalprofitearned;
gst=grandtotal=totalprofitearned=0;

/* Mr.Salman ran a small grocery business
He works on 15% profit on sale of each item
He also deduct 18% GST on each sale that he made*/

printf("Enter the price of the first item=");
scanf("%d",&item1);

printf("Enter the price of the second item=");
scanf("%d",&item2);

printf("Enter the price of the third item=");
scanf("%d",&item3);

printf("Enter the price of the fourth item=");
scanf("%d",&item4);

printf("Enter the price of the fifth item=");
scanf("%d",&item5);

printf("\n        Salman grocery Store ");
printf("\n_________________________________________");
printf("\nDescription           |         Price");
printf("\n_________________________________________");
printf("\nItem 1                |            %3d",item1);
printf("\nItem 2                |            %3d",item2);
printf("\nItem 3                |            %3d",item3);
printf("\nItem 4                |            %3d",item4);
printf("\nItem 5                |            %3d",item5);
printf("\n_________________________________________");
itemtotal=item1+item2+item3+item4+item5;
printf("\nItem Total            |            %3d",itemtotal);
gst=itemtotal*18/100;
printf("\nG.S.T                 |            %.1f",gst);
printf("\n_________________________________________");
grandtotal=itemtotal+gst;
printf("\nGrand Total           |            %.1f",grandtotal);
totalprofitearned=itemtotal*15/100;
printf("\n\nTotal Profit Earned   |            %.2f",totalprofitearned);

}
