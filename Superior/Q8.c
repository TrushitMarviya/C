#include <stdio.h>
int main()
{
    int size1, size2;
    printf("Enter size of First array : ");
    scanf("%d", &size1);
    printf("Enter size of Second  array : ");
    scanf("%d", &size2);
    int arr1[size1],arr2[size2];
    for (int i = 0; i < size1; i++)
    {
        printf("Enter  Elements of First array :");
        scanf("%d", &arr1[i]);
    }
    for (int j = 0; j < size2; j++)
    {
        printf("Enter Elements of Second array :");
        scanf("%d", &arr2[j]);
    }
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                printf("Intersection Elements are : %d \n", arr1[i]);
            }
        }  
    }
    
    return 0;
}
