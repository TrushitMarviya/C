#include<stdio.h>
main(){
    float wei,hei,BMI ;
    // wei=65;
    // hei=1.75;
   printf("Enter Weight :");
   scanf("%f",&wei);
   printf("Enter Height :");
   scanf("%f",&hei);

    BMI=  wei/(hei*hei);
   printf("Your Body Mass Index is  :%0.2f",BMI); 
}
