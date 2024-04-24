#include<stdio.h>
main(){
    for (int i = 10; i >5; i--)
    {
        for (int j=10; j>=i; j--)
        {
            printf(" %d",i*i);
        }
        printf("\n");
        
    }
    
}