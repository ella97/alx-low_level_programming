#include <stdio.h>

int print_last_digit(int n) {
    int lastDigit = n % 10;
    printf("Last Digit: %d\n", lastDigit);
    return lastDigit;
}
