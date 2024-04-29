#include<stdio.h>
main(){
    int n;
    int sum=0;
    printf("Enter Natural number:");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("Sum of natural number  is :%d",sum);
       
}