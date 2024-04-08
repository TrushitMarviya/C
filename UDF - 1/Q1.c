#include<stdio.h>
addnumbers(int a, int b){

printf("Addition of two numbers is :%d",a+b);
}
main(){
    int a , b;
    printf("Enter First Number:");
    scanf("%d",&a);
    printf("Enter Last Number:");
    scanf("%d",&b);
  addnumbers(a,b);
}
