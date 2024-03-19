#include<stdio.h>
main(){
int table,n;
printf("Enter The Number:");
scanf("%d",&n);
for (int i = 1; i<=10 ; i++)
{
    table=n*i;
    printf("%d*%d=%d\n", n,i,table);

}
}