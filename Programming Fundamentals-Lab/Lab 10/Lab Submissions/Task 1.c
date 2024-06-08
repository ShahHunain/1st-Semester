/*The values of j ank k are not swapped because of wrong swapping
it should be done like int tempt=a then a=b and then b=temp*/
//Also swapping does not occur because the changes are made only in the local variables thus we have to use pointers 

#include<stdio.h>

void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void main(void){
	
	int j=2, k=5;
	int *pt1=&j, *pt2=&k;
	printf("%d\t%d\n",j,k);
	swap(pt1,pt2);
	printf("%d\t%d",j,k);
}
	
	