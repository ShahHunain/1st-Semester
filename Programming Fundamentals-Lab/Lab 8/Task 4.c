#include <stdio.h>
#include <string.h>

void main(void){
	
	char password[200];
	char storedpassword[200];
	int count=0, ret=0;
	
	printf("Enter the password to store it: \n");
	gets(storedpassword);
	
	printf("Enter your password: \n");
	gets(password);
	
	int i=0;
	while (password[i]!='\0'){
		count++;
		i++;
	}
	
	
   ret=strcmp(password,storedpassword);
   
	if (count>=8 && ret==0)
          	printf("Login Successful. Welcome!\n");
	 
	 else 
	    printf("Login Failed. Invalid Password");
}
