
#include <stdio.h>

/* count lines, blanks, and tabs in input */
int main()
{
	int c, nl;

	nl = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nl;
		if (c == '\t')
			++nl;
		if (c == '\n')
			++nl;
	}


	printf("%d\n", nl);
}