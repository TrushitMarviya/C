#include<stdio.h>
int main(){
int len;
printf("Enter array length: ");
scanf("%d",&len);
int arr[len];

for (int i = 0; i < len; i++)
{
    printf("Enter elements of array:");
    scanf("%d",&arr[i]);
}
    int min=arr[0];
for (int i = 0; i < len; i++)
{
    if (min > arr[i])
    {
    min=arr[i];
    }
}
    printf("Smallest element of array is : %d\n",min);


return 0;    
}