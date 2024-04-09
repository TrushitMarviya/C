#include <stdio.h>

 sum(int row , int arr[]){

int sum=0;
for (int i = 0; i <row; i++)
{
    sum+=arr[i];
}
printf("sum of array :%d\n ",sum);
}
 main()
{
    int row;
    printf("Enter Array size :");
    scanf("%d", &row);
        int arr[row];
    for (int i = 0; i < row; i++)
    {

        printf("Elements[%d]", i);
        scanf("%d", &arr[i]);
    }

    sum(row,arr);
}