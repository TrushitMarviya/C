#include<stdio.h>
main(){
    int row;
    printf("Enter Array size:");
    scanf("%d",&row);
    int arr[row];
    for (int i=0;i<row;i++)
    {
        printf("Enter Array elements:");
        scanf("%d",&arr[i]);
    }
        for (int i=0;i<row;i++)
    {
        if (arr[i]<0)
        {
            printf("Negative Elements:%d",arr[i]);
        }
        printf("\n");
    }
}