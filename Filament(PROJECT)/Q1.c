#include<stdio.h>
main(){
    char a[]="HELLO WORLD";
    for (int i = 0; i < a[i] !=0; i++)
    {
        if (a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
        printf("%c",a[i]);
    }
    
}