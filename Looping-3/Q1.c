#include<stdio.h>
main(){
int sum=0,n;
printf("Enter The Number:");
scanf("%d",&n);
for (int i = 0; i<=n ; i++)
{
    sum=sum+i;
}
printf("Sum is %d",sum);
}