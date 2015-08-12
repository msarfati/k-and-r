#include <stdio.h>

void count_chars() {
    printf("Use ctrl+d to initiate EOF.\n");
    double nc;
    for (nc = 0; getchar() != EOF; ++nc);
    printf("Character count: %.0f\n", nc);
}

void new_typer() {
    int c_count = 0;
    for(int c; ( c = getchar()) != EOF; c_count++){
        putchar(c);
    }
    printf("Total characters: %d\n", c_count);
}

int main(){
    // count_chars();
    new_typer();
    return 0;
}