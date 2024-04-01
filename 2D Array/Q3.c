#include<stdio.h>
main(){
    int arr[5][5];
    int sum=0;
    for(int i = 0; i <5; i++)
    {
        for (int j=0;j<5;j++)
        {
            printf("Enter the size of array:");
            scanf("%d",&arr[i][j]);
        }    
    }
        for (int i = 0; i <5; i++)
    {
        for (int j=0;j<5;j++)
        {
            if (i==0||i==4||j==0||j==4)
            {
            sum+=arr[i][j];   
            }
        }    
    }
    printf("Sum of boundry elements is :%d",sum);
}