#include<stdio.h>
main(){

    int n;
    int sum =0;
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
        sum=sum+arr[i];
    }
    printf("Sum of array is :%d\n",sum);

}