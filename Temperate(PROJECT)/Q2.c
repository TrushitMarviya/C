#include<stdio.h>
main(){
    int a,num=0 ;
    printf("Enter The Number:");
    scanf("%d",&a);
    while (a!=0)
    {
        a/=10;
        num++;
    }
    printf("%d",num);
}