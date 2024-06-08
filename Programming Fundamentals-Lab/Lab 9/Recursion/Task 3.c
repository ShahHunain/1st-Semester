#include<stdio.h>

int loop(int a, int b);
int GCD(int a, int b);

void main (void){

int a,b,gcd;
a=b=gcd=0;

printf("Enter the first number = \n");
scanf("%d",&a);

printf("Enter the second number = \n");
scanf("%d",&b);
	
gcd=loop(a,b);
printf("The gcd of the numbers %d and %d is %d\n",a,b,gcd);
printf("The GCD of the two numbers %d and %d is %d",a,b,GCD(a,b));

}

int loop(int a, int b){
	int gcd=0;
	for (int i=1; i<=a && i<=b; i++){
	if (a%i==0 && b%i==0){
	gcd=i;
}
}
return gcd;
}

int GCD(int a, int b){
	if (b==0){
		return a;
	}
	else{
		return GCD(b, a % b);
	}
}