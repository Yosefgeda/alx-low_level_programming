#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */


/**
 * main - execution of main results a random number checked for polarity
 * Return: random number and its polarity
 */
int main(void)

{
	/**
	 * this program generates a random number
	 * and the numbers polarity is checked
	 */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
	/**
	 * return - function returns the conditional value
	 * the returned value is for the random number
	 */
	return (0);

}
