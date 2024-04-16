#include<stdio.h>
#include<string.h>
struct STUDENT{
    int id ;
    char name[100];
    int age ;
    char course[100];
    char city[100];
    int standard ;
    char school[100];
} stu[1000];
main(){
int n=3;
for (int i = 0; i < 3; i++)
{
    printf("Enter your ID :");
    scanf("%d", &stu[i].id);
    printf("Enter your Name :");
    scanf("%s", &stu[i].name);
    printf("Enter your age :");
    scanf("%d", &stu[i].age);
    printf("Enter your Course :");
    scanf("%s", &stu[i].course);
    printf("Enter your City :");
    scanf("%s", &stu[i].city);
    printf("Enter your Standard :");
    scanf("%d", &stu[i].standard);
    printf("Enter your School :");
    scanf("%s", &stu[i].school);
    
}
for (int i = 0; i < 3; i++)
{
    printf("%d\n %s\n %d\n %s\n %s\n %d\n %s\n", stu[i].id , stu[i].name , stu[i].age ,stu[i].course ,stu[i].city ,stu[i].standard ,stu[i].school);
}



}