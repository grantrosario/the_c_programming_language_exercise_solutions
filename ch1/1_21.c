#include <stdio.h>

#define TAB 5

int main()
{
	int c, i, j;
	
	i = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			++i;
			
			if((i % TAB) == 0)
				putchar('\t');
		}

		else {
			for(j = 0; j < (i % TAB); ++j) {
				putchar(' ');
			}

			putchar(c);

			if(i != 0)
				i = 0;
		}
	}
}