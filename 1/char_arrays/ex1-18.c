#include <stdio.h>
#define MAXLINE 1000

/* Forward Declarations */

int my_getline(char line[], int maxline);
char clean_line(char original[], int len);

int main() {
    /* Print longest input line */
    int len; // Current line length
    char line[MAXLINE]; // current input line

    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > 80) {
            printf("\n%s", clean_line(line, len));
        }
    return 0;
}

char clean_line(char original[], int len) {
    char cleaned[len];
    int i = 0;

    while ((cleaned[i] = original[i]) != ('\t' || ' ' || '\0'))
        ++i;
    return cleaned;
}

int my_getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
