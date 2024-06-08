#include<stdio.h>
#include<conio.h>
void main (void){

float NTS,FSC;

printf("Enter your FSC marks: \n");
scanf("%f", &FSC);
printf("Enter your NTS marks: \n");
scanf("%f", &NTS);

if ((FSC>70)&&(NTS>=70)){
    printf("\nOxford University\n");
    printf("\nIT\n");
}else if ((FSC>70)&&(NTS>=60)){
    printf("\nOxford University\n");
    printf("\nElectronics\n");
}else if ((FSC>70)&&(NTS>=50)){
    printf("\nOxford University\n");
    printf("\nTelecommunication\n");
}else if((FSC>=60 && FSC<=70)&&(NTS>=50)){
    printf("\nMIT\n");
    printf("\nIT\n");
}else if((FSC>=50 && FSC<=59)&&(NTS>=50)){
    printf("\nMIT\n");
    printf("\nChemical\n");
}else if((FSC<50 && FSC>40)&&(NTS>=50)){
    printf("\nMIT\n");
    printf("\nComputer\n");
}

}
