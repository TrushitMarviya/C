#include <stdio.h>
#include <string.h>
main (){
  char first_name [50];
  printf("First Name :");
	gets(first_name);
	
	char last_name[55];
	printf("Last Name :");
	gets(last_name);	
	
	char full_name[100];
	
	strcpy(full_name,strcat(first_name ,last_name ));
	puts(full_name);
}

