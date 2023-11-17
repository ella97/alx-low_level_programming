#include <stdio.h>

int main(void) {
    for (char c = 'z'; c >= 'a'; c--) {
        putchar(c);
    }
    putchar('\n');
    return 0;
}
