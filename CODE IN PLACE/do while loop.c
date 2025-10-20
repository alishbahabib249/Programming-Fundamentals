#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;   // get last digit
        sum = sum + remainder;  // add to sum
        num = num / 10;         // remove last digit
    } while (num != 0);

    printf("Sum of digits = %d\n", sum);

    return 0;
}
