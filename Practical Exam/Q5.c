#include<stdio.h>
struct HOUSE{
    int qun;
    int year;
    char city;
}house[1000];
main(){
    int n;
    printf("Enter House Number");
    scanf("%d",&n);
    for (int i = 1; i<=n ; i++)
    {
    printf("Enter House Quantity :");
    scanf("%d", &house[i].qun);
    printf("Enter Established Year :");
    scanf("%d", &house[i].year);
    printf("Enter City :");
    scanf("%s", &house[i].city);
    }
    for (int i = 1; i <n ; i++){
        printf("%d\n %d\n %s\n",house[i].qun , house[i].year ,house[i].city);
    }   
}