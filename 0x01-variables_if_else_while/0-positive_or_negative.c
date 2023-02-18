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
	printf("is positive");
	} else if (n < 0) {
	printf("is negative ");
	} else {
	printf("is zero ");
	}

	return (0);
}
