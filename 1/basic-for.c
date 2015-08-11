#include <stdio.h>

int main(int argc, char *argv[]) {
    // printf("Argument vectors:\n%c", *argv);
    int my_array[] = {88, 24, 2};
    for (int i = 0; i <= 2; ++i) {
        printf("%d\n", my_array[i]);
    }

    char *my_new[2];
    my_new[0] = "Hello";
    my_new[1] = "world!";
    for (int i = 0; i <=1; ++i) {
    printf("%s\n", my_new[i]);
    }

    return 0;
}