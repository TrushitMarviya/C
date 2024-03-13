#include<stdio.h>
main(){
int a,b,c ;
a=8;
b=3;
c=12;
(a<b)?(a<c)?printf("A is small"):printf("C is small")
:(b<c)?printf("B is small"):printf("C is small");
}
