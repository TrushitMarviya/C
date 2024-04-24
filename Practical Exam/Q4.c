#include<stdio.h>

main(){
    int len;
    printf("Enter Array Length :");
    scanf("%d",&len);
    int arr[len];
    for (int i = 0; i < len; i++)
    {
    printf("Enter %d Element :",i+1);
    scanf("%d",&arr[i]);
    }
    int *ptr;
    ptr=&arr;
    printf("Square of array:\n");
for (int i = 0; i < len; i++)
{
    printf("%d\n",*(ptr+i)*(*(ptr+i)));
}

}