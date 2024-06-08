#include<stdio.h>
#include<string.h>

struct engine_parts{
	int serial;
	int year;
	char material[20];
	int quantity;
};

void main(void){
	int size=0;

	printf("Enter the size you want:\n");
	scanf("%d",&size);

	struct engine_parts var[size];

	int i;
	for (i=0; i<size; i++){
		printf("Enter the serial number:\n");
		scanf("%d",&var[i].serial);
		printf("Enter the year:\n");
		scanf("%d",&var[i].year);
		printf("Enter the material nature:\n");
		fflush(stdin);
		gets(var[i].material);
		printf("Enter the quantity:\n");
		scanf("%d",&var[i].quantity);
	}

	int search_serial=0;

	printf("Enter the serial from which you want to search:\n");
	scanf("%d",&search_serial);

	int count=0;

	printf("Enter the number of serial you want from the serial you entered:\n");
	scanf("%d",&count);

	int j=0;

	for(i=0; i<size; i++){
	if(search_serial==var[i].serial){
		for(j=0; j<count; j++){
			printf("%d\n",var[j+i].serial);
			printf("%d\n",var[j+i].year);
			puts(var[j+i].material);
			printf("%d\n",var[j+i].quantity);
			}
		break;
		}
	}
}
