#include<stdio.h>
cube(int  *a){

    printf("The cube of number is :%d",*a * *a * *a);
}
main(){
    int a;
    printf("Enter any Number:");
    scanf("%d",&a);
cube(&a);
}