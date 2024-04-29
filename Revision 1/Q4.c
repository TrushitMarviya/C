#include<stdio.h>
main(){
 int len1;
 int len2;
    printf("Enter first array length:");
    scanf("%d",&len1);
    printf("Enter second array length:");
    scanf("%d",&len2);
    int arr1[len1];
    int arr2[len2];
    int merg[len1+len2];
    for (int i = 0; i < len1; i++)
    {
    printf("Enter first array elements:");
    scanf("%d",&arr1[i]);
    }
    for (int j = 0; j < len2; j++)
    {
    printf("Enter second array elements:");
    scanf("%d",&arr2[j]);
    }
    for (int k = 0; k < len1 +len2 ; k++)
    {
        if (k < len1 )
        {
            merg[k]= arr1[k];
        }
        else
        {
            merg[k]= arr2[k-len1];
        }
    }
            for (int k = 0; k < len1 + len2 ; k++)
        {
            printf("%d ",merg[k]);
        }

}