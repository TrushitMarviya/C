#include<stdio.h>
main(){
   int arr[5],max=0;

for (int i = 0; i<5; i++)
{
    printf("Enter Element:");
    scanf("%d",&arr[i]);
}
for (int i = 0; i <5; i++)
{       
    if (arr[i]>max)
    {
        max=arr[i];
    }
}
    printf("Maximum Number  is:%d\n",max);

}