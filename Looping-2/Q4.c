#include<stdio.h>
main(){
    int f=0 , s=1 , n , j;
    printf("Enter Number:");
    scanf("%d",&j);
    for (int i = 1; i<=j; i++)
    {
        printf("%d\n",f);

        n=f+s;
        f=s;
        s=n;
    }
}