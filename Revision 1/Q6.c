#include <stdio.h>
#include <string.h>

int main()
{
    char string[100], stringrev[100];
    printf("Enter the String:");
    gets(string);
    strcpy(stringrev,string);
    strrev(stringrev);
    printf("The Reversed String is: %s\n",stringrev);
    printf("%d",strcmp(string , stringrev));

    if (strcmp(string , stringrev)== 0)
    {
        printf("String is Palindrome ");
    }else{
        printf("String is not Palindrome");
    }
       
}