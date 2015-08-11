// 1.4

#include <stdio.h>
#define LOWER   0
#define UPPER   300
#define STEP    20

int main() {
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        printf("%d\t%.2f\n", fahr, (5.0/9.0) * (fahr - 32));
    }
    return 0;
}
