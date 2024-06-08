#include<stdio.h>
#include<conio.h>
void main (void){

int numbers[]={4,1,6,8,10,21,8,9,2,6};
int maximum,minimum;
maximum=numbers[0];
minimum=numbers[0];

for (int i=0; i<10; i++){
    if (minimum>numbers[i])
        minimum=numbers[i];
    if (maximum<numbers[i])
        maximum=numbers[i];
}
printf("The maximum number is %d\n",maximum);
printf("The minimum number is %d\n",minimum);
}
