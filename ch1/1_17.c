#include <stdio.h>

#define MAXLINE 1000

int linelength(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];
	while ((len = linelength(line, MAXLINE)) > 0) {
		if (len > 80) {
			printf("%s", line);
		}
	}
}

int linelength(char funcline[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
		funcline[i] = c;
	}

	if (c == '\n') {
		funcline[i] = c;
		i++; 
	}

	funcline[i] = '\0';
	return i;
}