#include <stdio.h>
#include <string.h>
main (){
  char name [50];
  printf("Enter Name :");
	gets(name);
	
	char copy_name[55];
	strcpy(copy_name , name);
	printf("Copied Name :");
	puts(copy_name);	
	
}

