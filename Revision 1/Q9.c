//     *
//    * * 
//   * * *
//  * * * *
// * * * * *
#include<stdio.h>
main(){
int n;
printf("Enter Row size:");
scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        for (int j =n; j >i; j--)
        {
            printf(" ");
        }
        for ( int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}