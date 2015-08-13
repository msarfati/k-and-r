#include <stdio.h>

void line_counting() {
    int c;
    int n1 = 0;

    while ((c = getchar()) != EOF)
        n1 += c == '\n' ? 1: 0;
    printf("Line count: %d\n", n1);
}

int main() {
    line_counting();
    return 0;
}