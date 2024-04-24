#include<stdio.h>
int main(){
int number;
printf("Enter The Number: ");
scanf("%d",&number);

switch (number>0)
{
case 1:
   printf("Positive Number:");
    break;

default:
printf("Constant Number:");
    break;
}
return 0;    
}