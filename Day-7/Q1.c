#include<stdio.h>
main(){
    int a,b,c ;
    a = 8 ;
    b = 3;
    c =  12;


    if (a<b)
    {
        if (a<c)
        {
            printf("A is smaller");
        }else{
            printf("C is smaller");
        }
    }else{
        if (b<c)
        {
            printf("B is smaller");
        }else{
            printf("C is smaller");
        }
        
    }
    

}