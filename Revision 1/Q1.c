#include<stdio.h>
int main(){
int n1;
int n2;
printf("Enter  array length :");
scanf("%d",&n1);
int arr[n1];
int sum=0;

for (int i = 0; i < n1; i++)
{
    printf("elements of  array:");
    scanf("%d",&arr[i]);
}

for (int i = 0; i < n1; i++)
{
    sum+=arr[i];
}
   printf("Largest element is :%d",sum);

return 0;
}