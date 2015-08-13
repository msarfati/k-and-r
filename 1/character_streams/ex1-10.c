#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        if (c == *"\t") printf("\\t");
        if (c == *"\r") printf("\\b");
        if (c == *"\\") printf("\\");
        putchar(c);
    }
    return 0;
}
