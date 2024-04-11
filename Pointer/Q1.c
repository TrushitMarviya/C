#include<stdio.h>
max(int *a , int *b){
if (*a<*b)
{
    printf("Maximum number is %d",*b);
}else{
    printf("Maximum number is %d",*a);
}

}
main(){
  int a,b;
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Enter value of b :");
  scanf("%d",&b);

    max(&a,&b);
}