#include <stdio.h>

// Exercise 1-6

void ex_1_6() {
    int c;
    switch((c = getchar()) != EOF) {
        case 1:
            puts("Is 1");
            break;
        case 0:
            puts("Is 0");
            break;
    }
    // Answer is 1
}

void ex_1_6_b(){
    // int c;
    // puts("Value of expression is %d", (c = getchar()) != EOF);

    puts("Let's determine if the value is 1 or 0");
    int x = (getchar() != EOF);
    printf("%d", x);
}

void ex_1_7(){
    printf("EOF = %d", EOF);
}

void copy_stream() {
    int c;
    while ((c = getchar()) != EOF) {
        printf("[%d]\n", EOF);
        putchar(c);
    }
}

int main() {
    copy_stream();
    // ex_1_6();
    // ex_1_6_b();
    // ex_1_7();
    return 0;
}