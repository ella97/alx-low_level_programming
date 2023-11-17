#include <stdio.h>

int main() {
    int n = 50;
    unsigned long long int fib1 = 1; // First Fibonacci number
    unsigned long long int fib2 = 2; // Second Fibonacci number

    printf("%llu, %llu", fib1, fib2); // Print the first two numbers

    for (int i = 3; i <= n; i++) {
        unsigned long long int fib = fib1 + fib2;
        printf(", %llu", fib); // Print the current Fibonacci number
        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n");
    return 0;
}
