#include<stdio.h>
main(){
    char a[]="HelLo worLD";
    for (int i = 0; i < a[i] !=0; i++)
    {
        if (a[i]>='A'&& a[i]<='Z')
        {
            a[i]+=32;
        }
        else if (a[i]>='a'&& a[i]<='z')
        {
            a[i]-=32;
        }
        printf("%c",a[i]);   
    }   
}