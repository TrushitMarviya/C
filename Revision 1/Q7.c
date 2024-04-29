#include <stdio.h>
#include<string.h>

#define MAX_LEN 100

int main()
{
    char string1[100];
    char string2[100];
    char connect[1000];

    printf("Enter First String: ");
    gets(string1);

    printf("Enter Second String: ");
    gets(string2);

    int len1 = strlen(string1);
    int len2 = strlen(string2);

    for (int i = 0; i < len1; i++) {
        connect[i] = string1[i];
    }

    for (int i = 0; i < len2; i++) {
        connect[len1 + i] = string2[i];
    }

    connect[len1 + len2] = '\0';

    printf("The Concatenated String is: %s", connect);

    return 0;
}