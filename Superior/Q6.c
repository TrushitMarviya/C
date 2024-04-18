#include<stdio.h>
int arr_intake(int arr[], int arr_size){
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter number: ",i);
        scanf("%d",&arr[i]);        
    }
}
main(){
    int arr_size;
    printf("Enter the size of array: ");
    scanf("%d",&arr_size);

    int arr1[arr_size];
    arr_intake(arr1,arr_size);

    printf("\n");

    int arr2[arr_size];
    arr_intake(arr2,arr_size);

    printf("\n");
    int merged_size = arr_size+arr_size;
    int merge[merged_size];

    for (int i = 0; i < merged_size; i++)
    {
        merge[i] = arr1[i];
    }
    for (int i = 0; i < merged_size; i++)
    {
        merge[arr_size+i] = arr2[i];
    }
    printf("The merged array is: ");
    for (int i = 0; i < merged_size; i++)
    {
        printf("%d ",merge[i]);
}
}