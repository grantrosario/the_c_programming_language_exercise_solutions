#include <stdio.h>

#define MAXLINE 1000

char line[MAXLINE];

int getlinex();

int main()
{
	int t, len;
	int loc, spacehldr;
	const  int FOLDLENGTH = 70;

	while (( len = getlinex()) > 0) {
		if(len < FOLDLENGTH) {

		}

		else {
			t = 0;
			loc = 0;
			while(t < len)
			{
				if(line[t] == ' ') {
					spacehldr = t;
				}

				if(loc == FOLDLENGTH) {
					line[spacehldr] = '\n';
					loc = 0;
				}

				loc++;
				t++;
			}
		}

		printf ( "%s", line);
	}

	return 0;
}

int getlinex()
{
	int c, i;
	extern char line[];

	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		line[i] = c;
	}

	if (c == '\n') {
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;

}