#include <stdio.h>
int main() {
    int n;
    printf("Enter the integer number: ");
    scanf("%d", &n); //215

    int reverse = 0;
    while (n != 0) {
        int digit = n % 10;  //5 1 2
        reverse = reverse * 10 + digit;  //5 51  512
        n=n/10; // 21 2 0
    }
    printf("Reversed number: %d\n", reverse);
    return 0;
}
