#include<stdio.h>
int calculateFactorial(int a,int fact){
for (int i = a; i >=1; i--)
{
    fact*=i;
}
    printf("The factorial of number:%d",fact);

}
int main(){
int a;
int fact=1;
printf("Enter The number:");
scanf("%d",&a);

calculateFactorial(a,fact);
}