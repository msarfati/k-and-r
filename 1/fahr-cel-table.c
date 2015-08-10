#include <stdio.h>

// Celcius = (5 / 9)(F - 32)

int main() {
    float fahr, cel;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    // Ex1-3
    printf("Fahrenheit\tCelcius\n");
    while (fahr <= upper) {
        cel = 5 * (fahr-32) / 9;
        printf("%9.0f\t%.2f\n", fahr, cel);
        fahr += step;
    }
    return 0;
}
