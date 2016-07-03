

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line size */

int getlinex(char line[], int maxline);

/* print longest input line */
int main(void) {
  int len;               /* current line length */
  char line[MAXLINE];    /* current input line */
  while((len = getlinex(line, MAXLINE)) > 0) {
    printf("%5d: %s", len - 1, line);
  }
}

/* getlinex: read a line into s, return length */
int getlinex(char s[], int lim) {
  
  int c, i;
  for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
    s[i] = c;
  }

  if(c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}