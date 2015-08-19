#include <stdio.h>

// int power(int n, int e) {
//     int result = n;
//     for (int i = 1; i < e; i++)
//         result *= n;
//     return result;
// }

int power(int m, int n);
int sqr(int n);


int power(int m, int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= m;

    return result;
}

int sqr(int n) {
    return n * n;
}

int main() {
    printf("Square: %d\n", sqr(5));
    for (int i=0; i <= 12; i++)
        printf("2^%d\t%d\n", i, power(2, i));
    return 0;
}