#include <stdio.h>
#include <string.h>
int main()
{

    char arr[100];
    int vowel = 0;
    printf("Enter the string :");
    gets(arr);
    for (int i = 0; arr[i] != NULL; i++)
    {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            vowel++;
        }
    }
    printf("The number of vowels in the string is %d", vowel);

    return 0;
}
