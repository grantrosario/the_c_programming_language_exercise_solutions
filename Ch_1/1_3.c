

#include <stdio.h>

/*----------------------------------------------------------------------------------------------------------- 
 Exercise 1-3. Modify the temperature conversion program to print a heading above the table.
 -----------------------------------------------------------------------------------------------------------*/
 
 // print Celsius-fahrenheit table for fahr = 0, 20, ..., 300; floating-point version
 

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;       /* lower limit of temp table */
	upper = 300;     /* upper limit */
	step = 20;

	printf("_______________________________\n");
	printf("Celsius to Fahrenheit Converter\n");
	printf("_______________________________\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius) + 32.0;
		printf("%4.1f.....%3.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
