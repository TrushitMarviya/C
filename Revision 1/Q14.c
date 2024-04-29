#include<stdio.h>
struct STUDENT{
char name[100];
int marks[5];
}stu[1000];
main(){
int n ;
printf("Enter the No. of students:");
scanf("%d",&n);


for (int i = 1; i <=n; i++)
{
    printf("Enter Name:");
    scanf("%s",&stu[i].name);
    for (int j = 1; j<=5; j++)
    {
        printf("Enter Marks of Subjects :");
        scanf("%d",&stu[i].marks[j]);
   }   
}
for (int i = 1; i <=n; i++)
{
    int sum=0;
    for (int j = 1; j <=5; j++)
    {
        sum=sum+stu[i].marks[j];
    }

        float average = (float)sum / 5;
        printf("Average marks of %s: %.2f\n", stu[i].name, average);
}
}