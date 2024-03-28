#include<stdio.h>
main(){
    for (int i =1; i <=5; i++)
    {
        for (int s=1;s<=i;s++)
        {
            printf(" ");
        }
        for (int j=1;j<=5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}