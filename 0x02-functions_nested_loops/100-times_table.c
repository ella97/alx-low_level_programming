#include <stdio.h>

void print_times_table(int n) {
    if (n > 15 || n < 0) {
        return;
    }

    for (int i = 0; i <= 10; i++) {
        printf("%2d x %2d = %2d\n", i, n, i * n);
    }
}
