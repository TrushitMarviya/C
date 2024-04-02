#include<stdio.h>
main(){
    int row,col;
    printf("Enter size of row :");
    scanf("%d",&row);
    printf("Enter size of Column :");
    scanf("%d",&col);
    int arr[row][col];
    for (int i = 0; i <row; i++)
    {
        for (int j=0;j<col;j++)
        {
            printf("Enter the size of array:");
            scanf("%d",&arr[i][j]);
        }    
    }
    
    int rownum,sumrow=0;
    printf("Enter row no:");
    scanf("%d",&rownum);
    for (int i=0;i<row;i++)
    {
        printf("Element of row :%d\n",arr[rownum][i]);
    }
    for (int i=0;i<row;i++)
    {
        sumrow+=arr[rownum][i];
    }
    printf("The sum of row's element is :%d\n",sumrow);


    int colnum,sumcol=0;
    printf("Enter col no:");
    scanf("%d",&colnum);
    for (int j=0;j<col;j++)
    {
        printf("Element of column :%d\n",arr[j][colnum]);
    }
    for (int j=0;j<col;j++)
    {
        sumcol+=arr[j][colnum];
    }
    printf("The sum of column's element is :%d",sumcol);
}
