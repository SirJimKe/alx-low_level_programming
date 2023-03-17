#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *main - will assign a random number to the variable n each time it is executed
 *if the last digit of n is greater than 5: the string and is greater than 5
 *if the last digit of n is 0: the string and is 0
 *if the last digit of n is less than 6 and not 0: the string and is less than\
 * 6 and not 0
 *Return: 0
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	x = n % 10;

	printf("Last digit of %d is ", n);

	if (x > 5)
		printf("%d and is greater than 5\n", x);
	if (x == 0)
		printf("%d and is 0\n", x);
	if (x < 6 && !0)
		printf("%d and is less than 6 and not 0\n", x);
	return (0);
}
