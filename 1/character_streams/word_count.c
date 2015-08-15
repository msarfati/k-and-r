#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

void one_word_line() {
    // ex-1-12 : One word per line
    int c, state;
    while ((c = getchar()) != EOF) {
        if (c == *" " || c == *"\t")
            putchar(*"\n");
        else
            putchar(c);
    }
}

void word_count(){
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == *"\n")
            ++nl;
        if (c == *" " || c == *"\n" || c == *"\t")
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nl, nw, nc);
}

int main() {
    one_word_line();
    // word_count();
    return 0;
}

/*
1-11: Numbers are counted as words, space seperators between numbers. Special characters in isolation also considered words.
*/