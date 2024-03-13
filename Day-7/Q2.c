#include<stdio.h>
main(){
    int a,b,c,d ;
    a = 8 ;
    b = 3;
    c =  12;
    d = 7;

    if (a>b)
    {
        if (a>c)
        {
            if (a>d)
            {
                printf("A is Bigger");
            }else{
                printf("D is Bigger");
            }
            
        }else{
            printf("C is Bigger");
        }
        
     }else{
        if (b>c)
        {
          if (b>d)
          {
            printf("B is Bigger");
          }else{
            printf("D is Bigger");
          }
             
        }else{
            if (c>d)
            {
                printf("C is Bigger");
            }else{
                printf("D is Bigger");
            }
        }
        
    }
}


// a b 
// a c 
// a d
// b c 
// b d
// c d 