#include<stdio.h>
main(){
    int a,n;
    printf("Enter Number:");
    scanf("%d",&a);
    if (a<2)
    {
        printf("Number is not Prime Number");
    }
    for ( int i = 2; i*i <=a; i++)
    {
        if (a%i!=0)
        {
            printf("This is Prime Number\n");
            return 0;
        }
    }
    printf("This Number is Not Prime Number");
}
