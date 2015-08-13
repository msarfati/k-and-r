#include <stdio.h>

int count_character(char character, char compare) {
    return character == compare ? 1 : 0;
}

void line_counting() {
    int c;

    int tab_c = 0;
    int blank_c = 0;
    int newline_c = 0;

    while ((c = getchar()) != EOF) {
        tab_c += count_character(c, *"\t");
        blank_c += count_character(c, *" ");
        newline_c += count_character(c, *"\n");
    }
    printf("\nResult\n======\n\n");
    printf("Tabs: %d\n", tab_c);
    printf("Newlines: %d\n", newline_c);
    printf("Blanks: %d\n", blank_c);
}

int main() {
    line_counting();
    return 0;
}
