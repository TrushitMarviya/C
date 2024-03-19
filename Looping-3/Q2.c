#include<stdio.h>
main(){
int fact=1,n;
printf("Enter The Number:");
scanf("%d",&n);
for (int i =1; i<=n ; i++)
{
    fact=fact*i;
}
printf("Factorial is %d",fact);
}