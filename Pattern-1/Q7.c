// A               1
// B A             2 1 
// C B A           3 2 1
// D C B A         4 3 2 1 
// E D C B A       5  4 3 2 1

#include<stdio.h>
main(){
    for (int i = 65; i <=69; i++)
    {
        for (int j=i;j>=65;j--)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}