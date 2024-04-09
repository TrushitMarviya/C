#include <stdio.h>

int factorial(int n){
 if (n<=1)
 {
    return 1;
 }else{
    return n*factorial(n-1);
 }
}
 main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Factorial of Number: %d",factorial(n));

}