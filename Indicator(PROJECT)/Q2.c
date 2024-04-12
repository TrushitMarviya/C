#include<stdio.h>
cube(int *a , int *b , int *c){
int *temp;
temp = *a ;
*a = *b ;
*b = *c ;
*c = temp ;
  printf("After  swapping :\n");
  printf("a :%d\n",*a);
  printf("b :%d\n",*b);
  printf("c :%d",*c);
}
main(){
    int a,b,c;
    printf("Enter any Number:");
    scanf("%d",&a);
    printf("Enter any Number:");
    scanf("%d",&b);
    printf("Enter any Number:");
    scanf("%d",&c);
    printf("Before swapping :\n");
    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);
    
cube(&a,&b,&c);
}