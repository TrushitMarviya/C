// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1
// 1                 1
// 1 2             2 1
// 1 2           3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3 4 5 5 4 3 2 1

#include<stdio.h>
main(){

for (int i =5;i>=1; i--)
{
    for (int j =1;j<=i; j++)
    {
        printf("%d",j);
    }
        for (int k=8;k>=i*2-1;k--)
    {
        printf(" ");
    }
        for (int j=i;j>=1;j--)
        {
        printf("%d",j);    
        }
    printf("\n");
}
for ( int k=1;k<=5;k++)
{
    for (int l=1; l<=k; l++)
    {
        printf("%d",l);
    }  
            for (int s=4;s>=k*2-5;s--)
    {
        printf(" ");
    }
    for (int t=k;t>=1;t-- )
    {
        printf("%d",t);
    }
printf("\n");
}
}