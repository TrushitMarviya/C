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
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            even+=1;
        }else{
            odd+=1;
        }
    }
    printf("The even numbers in the array is %d.\n",even);
    printf("The odd numbers in the array is %d.\n",odd);

}