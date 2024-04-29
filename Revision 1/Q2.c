#include<stdio.h>
int main(){
int n1;
int n2;
printf("Enter  array length :");
scanf("%d",&n1);
int arr[n1];
int max=0;

for (int i = 0; i < n1; i++)
{
    printf("elements of  array:");
    scanf("%d",&arr[i]);
}
max=arr[0];
for (int i = 0; i < n1; i++)
{
    max=arr[i];
}
   printf("Sum is :%d\n",max);
   
return 0;
}