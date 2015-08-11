#include <stdio.h>

int main(){
    printf("Use ctrl+d to initiate EOF.\n");

    double nc;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("Character count: %.0f\n", nc);

    return 0;
}