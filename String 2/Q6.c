#include <stdio.h>
#include <string.h>
main (){
char n1[100];
char n2[100];
printf("first string:");
gets(n1);

printf("second string:");
gets(n2);

int compare = strcmp(n1,n2);
if(compare==0){
	printf("Strings are equal");
}else if (compare==1||compare==-1)	{
	printf("String are not equal");
}
}

