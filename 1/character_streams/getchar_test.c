#include <stdio.h>

int main(int argc, char const *argv[]) {
    int c = getchar();

    while (c != *"q" || c != *"Q") {
        putchar(c);
        c = getchar();
    }

    // Single line output
    // while (c != *"\n") {
    //     putchar(c);
    //     c = getchar();
    // }

    return 0;
}