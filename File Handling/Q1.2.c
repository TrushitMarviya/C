#include<stdio.h>
int main(){
   FILE *p;
   char data[100];
   p=fopen("file.txt","w");
   if(p==NULL){
        printf("File not found");
}else{
    printf("File Open sucessfully");
    }
    fputs("new message",p);
}