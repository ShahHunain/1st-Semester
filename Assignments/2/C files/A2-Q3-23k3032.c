#include<stdio.h>
#include<conio.h>
void main(void){

printf("\t23k-3032  SHAH HUNAIN\n\n\n");

char days[5][20]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY"};
int flightavailibility[5][4]={
                        {1, 300, 0, 0},
                        {1, 320, 1, 310},
                        {0, 0, 1, 280},
                        {1, 380, 0, 0},
                        {1, 375, 1, 400}
};
char time,day;

for (int i=0; i<5; i++){
    for (int j=0; j<4; j++){
        if(flightavailibility[i][0]!=0 || flightavailibility[i][2]!=0){
            printf("The flight is available on day %s",days[i]);
            printf("\n");
            break;
        }
        else if (flightavailibility[i][0]==0 || flightavailibility[i][0]==0){
            printf("The flight is not available on day %s",days[i]);
            printf("\n");
            break;
        }
    }
}

printf("\nThe highest probability of booking the flight due to availibility on both morning and evening is on: \n");
for (int i=0; i<5; i++){
    for (int j=0; j<4; j++){
        if (flightavailibility[i][0]!=0 && flightavailibility[i][2]!=0){
            printf("%s\t\t",days[i]);
            break;
        }
    }
}
printf("\n\n");

/*The traveler is flexible with the day of travel but prefers the morning time slot.
Determine the day(s) when a flight is available in the morning and suggest the best option for booking based on this preference.*/

printf("Choose the time slot you want: \n");
printf("M=Morning\tE=Evening\n");
time=getchar();

switch (time){
case 'M':
    for (int i=0; i<5; i++){
            for (int j=0; j<4; j++){
    if (flightavailibility[i][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[i],flightavailibility[i][1]);
        break;
                }
            }
        }
break;
case 'E':
    for (int i=0; i<5; i++){
            for (int j=0; j<4; j++){
    if (flightavailibility[i][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[i],flightavailibility[i][3]);
        break;
                }
            }
        }
break;
default:
    printf("Invalid Input\n");
    }
printf("\n\n");
printf("Now please enter the day on which you want to book your flight: \n");
printf("0=Monday\t1=Tuesday\t2=Wednesday\t3=Thursday\t4=Friday: \n");
fflush(stdin);
day=getchar();

switch (day){
case '0':
    if (time=='M' && flightavailibility[0][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[0],flightavailibility[0][1]);
    }
    else if (time=='E' && flightavailibility[0][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[0],flightavailibility[0][3]);
    }
    else
        printf("The flight is not available on %s\n",days[0]);
break;

case '1':
    if (time=='M' && flightavailibility[1][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[1],flightavailibility[1][1]);
    }
    else if (time=='E' && flightavailibility[1][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[1],flightavailibility[1][3]);
    }
    else
    printf("The flight is not available on %s\n",days[1]);
break;

case '2':
    if (time=='M' && flightavailibility[2][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[2],flightavailibility[2][1]);
    }
    else if (time=='E' && flightavailibility[2][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[2],flightavailibility[2][3]);
    }
    else
    printf("The flight is not available on %s\n",days[2]);
break;

case '3':
    if (time=='M' && flightavailibility[3][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[3],flightavailibility[3][1]);
    }
    else if (time=='E' && flightavailibility[3][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[3],flightavailibility[3][3]);
    }
    else
    printf("The flight is not available on %s\n",days[3]);
break;

case '4':
    if (time=='M' && flightavailibility[4][0]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[4],flightavailibility[4][1]);
    }
    else if (time=='E' && flightavailibility[4][2]!=0){
        printf("The flight is available on %s and ticket price is Rs. %d\n",days[4],flightavailibility[4][3]);
    }
    else
    printf("The flight is not available on %s\n",days[4]);
break;

default:
    printf("Invalid Input\n");
}


}
