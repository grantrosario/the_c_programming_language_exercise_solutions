

#include <stdio.h>

/* print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300; floating-point version */

void convert(int, int, int);

int main()
{
	convert(0, 300, 20);
}

void convert(int lower, int upper, int step)
{
	float fahr, celsius;
		//int lower, upper, step;

		//lower = 0;       /* lower limit of temp table */
		//upper = 300;     /* upper limit */
		//step = 20;

		printf("-------------------------------\n");
		printf("\t  F ---> C\n");
		printf("-------------------------------\n");

		fahr = lower;
		while (fahr <= upper) {
			celsius = (5.0/9.0) * (fahr - 32.0);
			printf("\t%3.0f.....%4.1f\n", fahr, celsius);
			fahr = fahr + step;
		}
}
