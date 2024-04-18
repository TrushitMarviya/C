#include<stdio.h>
main(){
    int n;
    int even=0;
    int odd=0;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Elements of array :");
        scanf("%d",&arr[i]);
    }
    for (int i = n-1; i>=0; i--)
    {
    printf("The Reverce of array is %d\n",arr[i]);
    }
    }