#include<stdio.h>

struct date{
    int dd;
    int mm;
    int yy;
};

void main(void){
    struct date d;

    printf("Enter the day-month-year: ");
    scanf("%d %d %d", &d.dd, &d.mm, &d.yy);

    d.dd=d.dd+45;

    while(d.dd>31){
        d.dd=d.dd-31;
        d.mm=d.mm+1;
    }
    while(d.mm>12){
        d.mm=d.mm-12;
        d.yy=d.yy+1;
    }
    printf("\nThe updated date is: %d-%d-%d\n", d.dd, d.mm, d.yy);
}
