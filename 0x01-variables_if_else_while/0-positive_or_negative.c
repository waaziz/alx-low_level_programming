#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/* main - print whether the number stored in
 * the variable n is positive
 * or negative. 
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) {
	printf("%d is positive", n);
	} else if (n < 0) {
	printf("%d is negative", n );
	} else {
	printf("%d is zero ", n);
	}

	return (0);
}
