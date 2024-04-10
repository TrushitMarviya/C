#include<stdio.h>
int calculateArea(int len,int wid,int area){
 area=len*wid;
printf("The area of rectangle:%d",area);
}
int main(){
int len;
int wid;
int area; 
printf("Enter The rectangle length:");
scanf("%d",&len);
printf("Enter The rectangle width:");
scanf("%d",&wid);

calculateArea(len,wid,area);
}