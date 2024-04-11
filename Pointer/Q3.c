#include<stdio.h>
swap(int *a1 , int *b1){
int *temp;
temp = *a1;
*a1 = *b1; 
*b1 = temp;
  printf("After  swapping :\n");
  printf("a :%d\n",*a1);
   printf("b: %d",*b1);
}
void main(){
  int a,b;
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Enter value of b :");
  scanf("%d",&b);
  printf("Before swapping :\n");
  printf("a:%d\n",a);
  printf("b:%d\n",b);

    swap(&a,&b);
}