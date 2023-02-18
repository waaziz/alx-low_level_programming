#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

/**
 * main - print whether the number stored in
 * the variable n is positive
 * or negative.
 * Return: Always 0.
 */

int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	int digit;
	char str[100];
	digit = n%10;
	sprintf(str, "Last digit of %d is ", n);

        if (digit > 5)
        {
        sprintf(str + strlen(str), "%d and is greater than 5\n", digit);
        }
        else if (digit == 0)
        {
        sprintf(str + strlen(str), "and is 0\n");
        }
        else
        {
        sprintf(str + strlen(str), "%d and is less than 6 and not 0\n", digit);
        }
	printf("%s", str);

	return (0);
}
