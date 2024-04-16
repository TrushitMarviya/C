#include<stdio.h>
#include<string.h>
struct Employee{
    int id ;
    char name[100];
    int age ;
    char role[100];
    char city[100];
    int experience ;
    char com_name[100];
} emp[1000];
main(){
int n;
printf("Enter Employee Number:");
scanf("%d",&n);
for (int i = 0; i < n; i++)
{
    printf("Enter your ID :");
    scanf("%d", &emp[i].id);
    printf("Enter your Name :");
    scanf("%s", &emp[i].name);
    printf("Enter your age :");
    scanf("%d", &emp[i].age);
    printf("Enter your Role :");
    scanf("%s", &emp[i].role);
    printf("Enter your City :");
    scanf("%s", &emp[i].city);
    printf("Enter your Experience :");
    scanf("%d", &emp[i].experience);
    printf("Enter your Company Name :");
    scanf("%s", &emp[i].com_name);
    
}
for (int i = 0; i < n; i++)
{
    printf("%d\n %s\n %d\n %s\n %s\n %d\n %s\n", emp[i].id , emp[i].name , emp[i].age ,emp[i].role ,emp[i].city ,emp[i].experience ,emp[i].com_name);
}
}