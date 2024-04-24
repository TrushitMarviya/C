#include<stdio.h>
void reverse(int num){
int reverse=0;
while (num!= 0)
{
    int number=num%10;
    reverse=reverse*10+number;
    num=num/10;
}
printf("Reverse number is :%d\n",reverse);
}

int main(){
int num;
printf("Enter 3 digit number: ");
scanf("%d",&num);


reverse(num);

return 0;    
}