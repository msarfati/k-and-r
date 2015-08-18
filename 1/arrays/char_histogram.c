#include <stdio.h>

// 1-14

void histogram(int letter[94]) {
    printf("Histogram of Character Freqs\n================\n");

    for (int i = 1; i <= 94; i++) {
        if (letter[i] > 0) {
            printf("%c:\t%d ", 32 + i, letter[i]);
            for (int j = 1; j <= letter[i]; j++)
                printf("#");
            printf("\n");
        }
    }
}

void char_count(){
    int c;
    int letter[94]; // Only supporting lower case characters
    for (int i = 0; i <= 94; ++i) letter[i] = 0; // Sets all elements to 0

    while ((c = getchar()) != EOF)
        letter[c-32] += 1;
    histogram(letter);

}

void printc() {
    //  Prints the 77th ASCII character
    printf("%c\n", 77);
}

int main() {
    char_count();
    // printc();
    return 0;
}