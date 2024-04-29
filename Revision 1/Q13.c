#include<stdio.h>
struct STUDENT
{
char name[100];
int no;
int marks;
}stu[1000];
main(){
    int n;
    printf("Enter Students Number:");
    scanf("%d",&n);
for (int i = 1; i <=n ; i++)
{
    printf("Enter The name :");
    scanf("%s",&stu[i].name);
    printf("Enter  Roll No :");
    scanf("%d",&stu[i].no);
    printf("Enter The marks :");
    scanf("%d",&stu[i].marks);
}
for (int i = 1; i <=n; i++)
{
    printf("%s\n %d\n %d\n",stu[i].name , stu[i].no , stu[i].marks);
}

}