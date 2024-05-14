#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;

    // store the number of digits of num in n
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // check if the number is Armstrong
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // return 1 if the number is Armstrong, 0 otherwise
    if ((int)result == num)
        return 1;
    else
        return 0;
}

int main() {
    int number, i;

    printf("Enter five numbers:\n");

    for (i = 0; i < 5; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &number);

        if (isArmstrong(number))
            printf("%d is an Armstrong number.\n", number);
        else
            printf("%d is not an Armstrong number.\n", number);
    }

return 0;
}
