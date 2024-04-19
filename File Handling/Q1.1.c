#include<stdio.h>
int main(){
   FILE *fp;
   char data[100];
   fp=fopen("file.txt","r");
   if(fp==NULL){
        printf("File not found");
}else{
    printf("File Open successfully");
    while (fgets(data ,80,fp)!=NULL)
{
    printf("\n%s",data);
}
}
}