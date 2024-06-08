#include<stdio.h>
#include<conio.h>
void main (void){

for (int i=0; i<=6; i++){
    if(i%2==0){
        printf("%d\t%d\t%d\t%d\n",i,i,i,i);
    }
    if(i%2!=0){
        printf("\t%d\t%d\n",i,i);
    }
}

}
