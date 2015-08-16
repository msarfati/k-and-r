#include <stdio.h>

#define IN  1  /* inside a word */
#define OUT 0  /* outside a word */

// 1-13

void histogram(int word_length[10]) {
    printf("Histogram of Word Lengths\n================\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d:\t%d ", i, word_length[i]);
        if (word_length[i] > 0){
            for (int j = 1; j <= word_length[i]; j++)
                printf("#");
        }
        printf("\n");
    }
}

void word_count(){
    int c, words, letters, state;
    int word_length[11]; // Only supporting words of length 1 - 10. 0 (out whitespace characters) is still counted, but not reported.
    for (int i = 0; i <= 11; ++i) word_length[i] = 0; // Sets all elements to 0

    state = OUT;
    words = letters = 0;
    while ((c = getchar()) != EOF) {
        letters++;
        if (c == *" " || c == *"\n" || c == *"\t") {
            word_length[letters-1] += letters <= 10 ? 1 : 0;
            letters = 0;
            state = OUT;
        }
        else if (state == OUT) {
            state = IN;
            ++words;
        }
    }
    histogram(word_length);
    // for (int i = 1; i <= 10; ++i)
    //     printf("%d: %d\n", i, word_length[i]);
    // printf("\n");
}

int main() {
    word_count();
    return 0;
}