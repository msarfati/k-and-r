#include <stdio.h>
#define MAXLINE 1000

/* Forward Declarations */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);
int get_len(char line[]);

int main() {
    /* Print longest input line */
    int len; // Current line length
    char line[MAXLINE]; // current input line

    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > 80) {
            // copy(longest, line);
            printf("\n%s", line);
        }
    return 0;
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
