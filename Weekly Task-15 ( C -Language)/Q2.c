#include<stdio.h>
#include<math.h>
main(){
    float principal, rate ,time ,compound_interest,casetime;
    printf("Enter The Case time :");
    scanf("%f",&casetime);
    for (float i = 0; i <casetime; i++)
    {
    printf("Enter The Principal Value :");
    scanf("%f",&principal);
    printf("Enter The Rate Of Interest :");
    scanf("%f",&rate);
    printf("Enter The time (in years) :");
    scanf("%f",&time);
    
    compound_interest = principal * (pow((1 + rate / 100),time))-principal*casetime;
    printf("The Component Intrest is:%f",compound_interest);   
    }    
}

