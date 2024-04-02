#include<stdio.h>
main(){
    int row,col;
    printf("Enter size of row :");
    scanf("%d",&row);
    printf("Enter size of Column :");
    scanf("%d",&col);
    int arr[row][col];
    int max=0;
    for (int i = 0; i <row; i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("Enter the size of array:");
            scanf("%d",&arr[i][j]);
        }    
    }
        for (int i = 0; i <row; i++)
    {
        for (int j=0;j<col;j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }            
    }
    printf("Maximum element is : %d\n",max);
}