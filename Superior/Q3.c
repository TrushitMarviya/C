#include<stdio.h>
main(){

    int n;
    int small;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<small)
        {
            small=arr[i];
        }
    }
    printf("Smallest  Number of array  is :%d\n",small);
}