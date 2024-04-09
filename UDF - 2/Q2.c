#include<stdio.h>
#include<string.h>

length(char name[]){
int len = strlen(name);
printf("%d",len);
}


main(){
    char name [100];
    printf("Enter Array Name:");
    gets(name);
    puts(name);
    length(name);
}