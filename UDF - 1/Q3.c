#include<stdio.h>
dividenumbers(int a, int b){
if (b==0)
{
    printf("Invalid Number");
}else{
printf("division of two numbers is :%d",a/b);
}
}

main(){
    int a , b;
    printf("Enter Divident Number:");
    scanf("%d",&a);
    printf("Enter Divisor Number:");
    scanf("%d",&b);
  dividenumbers(a,b);
}
