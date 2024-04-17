#include<stdio.h>
struct Book{
    int id ;
    char company [100];
    char model[100];
    int year;
    char color[100];
    int price;
    int mileage;
}car[1000];

main(){
int n;
printf("Enter Car Numbers:");
scanf("%d",&n);

for (int i = 0; i < n; i++)
{
    printf("Enter Car ID:");
    scanf("%d",&car[i].id);
    printf("Enter Car Company:");
    scanf("%s",&car[i].company);
    printf("Enter Car Model:");
    scanf("%s",&car[i].model);
    printf("Enter Car Year:");
    scanf("%d",&car[i].year);
    printf("Enter Car Colour:");
    scanf("%s",&car[i].color);
    printf("Enter Car Price:");
    scanf("%d",&car[i].price);
    printf("Enter Car Mileage:");
    scanf("%d",&car[i].mileage);

}
for (int i = 0; i < n; i++)
{
    printf("%d\n %s\n %s\n %d\n %s\n  %d\n %d\n",car[i].id , car[i].company , car[i].model , car[i].year ,car[i].color ,car[i].price ,car[i].mileage);
}
}