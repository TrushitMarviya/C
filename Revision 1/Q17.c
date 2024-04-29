#include<stdio.h>
main(){
int number,temp ;
int a=0 , b=1;
int start=0;
printf("Enter the number of terms : ");
scanf("%d",&number);
while (number>start)
{
    temp=a;
    a=b;
    b=temp+b;
    start++;
    printf("%d\n",a);
}
}