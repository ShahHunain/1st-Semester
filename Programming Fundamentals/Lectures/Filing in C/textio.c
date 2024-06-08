#include <stdio.h>

int main(){
	FILE *f;
	int a,b;
	char ch;
	f=fopen("textio.c","r");
	/*printf("Enter your age and batch:");
	scanf("%d",&a);
	scanf("%d",&b);

	fprintf(f,"%d \n %d", a,b);
	*/
	//while( ch=fgetc(f) != '\0'){
	a=0;
	//fscanf(f,"%c", &ch);
	while(a<2)
	{
	//ch=fgetc(f);
	fscanf(f,"%c", &ch);
	if( ch != '\n')
		printf("%c",ch);
		a++;
	}
	//fscanf(f,"%d %d", &a);

//	printf("\n %d \n %d", a);


	fclose(f);
	return (0);


}
