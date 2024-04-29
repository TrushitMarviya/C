#include<stdio.h>

int main(){
    int n;
    printf("Enter array length:");
    scanf("%d",&n);

    char arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Elements :");
        scanf("%c",&arr[i]);
    }
    for (int i = n-1; i>=0; i--)
    {
        printf(" Reverse :%c\n",arr[i]);
    }
return 0;    
}
