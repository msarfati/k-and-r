#include <stdio.h>
#define MAXLINE 1000

/* Forward Declarations */

int my_getline(char line[], int maxline);
void copy(char to[], char from[]);
int get_len(char line[]);

int main() {
    /* Print longest input line */
    int len; // Current line length
    int max; // Max line length so far
    char line[MAXLINE]; // current input line
    char longest[MAXLINE]; // Longest line so far

    max = 0;
    while ((len = my_getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("\nLongest line was:\n%s\nLength: %d", longest, get_len(longest));
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

int get_len(char line[]) {
    int len, i = 0;
    while (line[i] != '\0') {
        i++;
        len++;
    }
    return len;
}

void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}