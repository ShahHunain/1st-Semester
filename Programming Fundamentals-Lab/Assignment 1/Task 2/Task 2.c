#include<stdio.h>
#include<conio.h>
void main (void){

float noofcalories,fatgrams,caloriesfromfat,totalcalories,percentofcalories;

printf("Enter the number of calories and fat grams in food\n");
scanf("%f %f",&noofcalories,&fatgrams);

//If the calories from fat are less than 30% of the total calories of the food, the food is low in fat

caloriesfromfat=fatgrams*9;
totalcalories=noofcalories+caloriesfromfat;
percentofcalories=caloriesfromfat/totalcalories*100;

if((noofcalories<0)||(fatgrams<0)||(caloriesfromfat>totalcalories)){
    printf("\nEither the calories or fat grams were incorrectly entered\n");
}else if (caloriesfromfat>0.3*totalcalories){
    printf("\nPercentage of calories that come from fat is %.2f\n",percentofcalories);
} else if (caloriesfromfat<0.3*totalcalories){
    printf("\nPercentage of calories that come from fat is %.2f\n",percentofcalories);
    printf("\nThe food is low in fats\n");
}
}
