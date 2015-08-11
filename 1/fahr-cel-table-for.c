#include <stdio.h>

// Celcius = (5 / 9)(F - 32)

int main() {
    printf("Fahrenheit\tCelcius\n");

    for (int fahr = 0; fahr <= 300; fahr+=20)
    {
        printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32));
    }

    int fahr = 32;
    printf("When they are equal:\n");
    printf("%3d\t%6.2f\n", fahr, (5.0/9.0) * (fahr-32));
    return 0;
}
