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
        char str[100];
        int n;
	int t = n % 10;
        srand(time(0));
        n = rand() - RAND_MAX / 2;
	sprintf(str, "Last digit of %d is ", n);

        if (t > 5)
        {
        sprintf(str + strlen(str), "%d and is greater than 5\n", t);
        }
        else if (t == 0)
        {
        sprintf(str + strlen(str), "and is 0\n");
        }
        else
        {
        sprintf(str + strlen(str), "%d and is less than 6 and not 0\n", t);
        }
	printf("%s", str);

	return (0);
}
