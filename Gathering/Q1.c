#include<stdio.h>
int calculateSumOfSquares(int sum,int n){
for (int i = 0; i < n; i++)
{
    if (i%2==0)
    {
        sum+=i*i;
    }
}
return sum;
}
int main(){
int n;
int sum=0;
printf("Enter The value :");
scanf("%d",&n);

printf("%d",sum);
calculateSumOfSquares(sum,n);
}