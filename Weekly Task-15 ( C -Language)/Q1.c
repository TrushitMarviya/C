#include<stdio.h>
main(){
    int n;
    printf("Enter The Natural Number :");
    scanf("%d",&n);
    int sum=0;
    for (int i =1; i <=n; i++)
    {
        sum=sum+i;
    }
    printf("The sum of the  5 natural numbers is: %d ",sum);

}