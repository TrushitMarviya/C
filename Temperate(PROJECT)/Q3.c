#include<stdio.h>
main(){
    int num ,first,last,sum ;
    printf("Enter Number :");
    scanf("%d",&num);
     first = num ;
    while (first>=10)
    {
        first/=10;
    }
   last= num%10;   
   sum=last+first;
   printf("Sum is :%d",sum);
}