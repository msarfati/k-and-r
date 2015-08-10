#include <stdio.h>

// Celcius = (5 / 9)(F - 32)
// Ex1-4

int main() {
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    cel = lower;

    printf("Celcius\tFahrenheit\n");
    while (cel <= upper) {
        fahr = 5 / (cel + 32) * 9;
        // cel = 5 * (fahr-32) / 9;
        printf("%.0f\t%.2f\n", cel, fahr);
        cel += step;
    }
    return 0;
}
